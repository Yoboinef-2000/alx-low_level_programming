#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_error(char *message) {
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(98);
}

void read_elf_header(int file_descriptor, Elf64_Ehdr *elf_header) {
    
	ssize_t bytes_read;

	if (lseek(file_descriptor, (off_t)0, SEEK_SET) == -1) {
        display_error("Error using lseek");
    }

    bytes_read = read(file_descriptor, elf_header, sizeof(Elf64_Ehdr));
    if (bytes_read == -1 || bytes_read != sizeof(Elf64_Ehdr)) {
        display_error("Error reading ELF header");
    }
}

void display_elf_header(Elf64_Ehdr *elf_header) {
    
	int i;

	printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf(" %02x", elf_header->e_ident[i]);
    }
    printf("\n");
    
    printf("  Class:                             %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
    printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
    printf("  Entry point address:               %#lx\n", (unsigned long)elf_header->e_entry);
}

int main(int argc, char *argv[]) {
    
	int file_descriptor;
	Elf64_Ehdr elf_header;

	if (argc != 2) {
        display_error("Usage: elf_header elf_filename");
    }

    file_descriptor = open(argv[1], O_RDONLY);
    if (file_descriptor == -1) {
        display_error("Error opening file");
    }

    read_elf_header(file_descriptor, &elf_header);

    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3) {
        display_error("Not an ELF file");
    }

    display_elf_header(&elf_header);

    close(file_descriptor);

    return 0;
}

