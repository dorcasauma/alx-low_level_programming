#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_elf_header(const char *filename) {
    int fd;
    Elf64_Ehdr elf_header;

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        dprintf(STDERR_FILENO, "Error: Cannot open file '%s'\n", filename);
        exit(98);
    }

    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
        dprintf(STDERR_FILENO, "Error: Cannot read ELF header from file '%s'\n", filename);
        exit(98);
    }

    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3) {
        dprintf(STDERR_FILENO, "Error: '%s' is not an ELF file\n", filename);
        exit(98);
    }

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", (elf_header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", (elf_header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", elf_header.e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", (elf_header.e_type == ET_REL) ? "REL (Relocatable file)" : 
                                                        (elf_header.e_type == ET_EXEC) ? "EXEC (Executable file)" :
                                                        (elf_header.e_type == ET_DYN) ? "DYN (Shared object file)" :
                                                        (elf_header.e_type == ET_CORE) ? "CORE (Core file)" : "UNKNOWN");
    printf("  Entry point address:               %#lx\n", (unsigned long)elf_header.e_entry);

    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    display_elf_header(argv[1]);

    return 0;
}
