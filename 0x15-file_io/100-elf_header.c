#include "main.h"

/**
 * error_exit_elf - exit with code and error message
 * @code: exit code
 * @message: pointer to exit message
 */
void error_exit_elf(int code, const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(code);
}



/**
 * print_elf_header_info - prints header info of said elf file
 * @header: pointer to elf file headr
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\nClass:                          %s\n",
			header->e_ident[EI_CLASS] == ELFCLASS64 ?
			"ELF64" : "ELF32");
	printf("Data:                            %s\n",
			header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little-endian" : "2's complement, big_endian");
	printf("Version:                         %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("OS/ABI:                          %s\n",
			header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("ABI Version:                     %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("Type:                            %s\n",
			header->e_type == ET_EXEC ? "EXEC (Executeable file)" : "Other");
	printf("Entry point address:             0x%x\n",
		       (unsigned int)header->e_entry);
}


/**
 * main - runs the program to display header info of ELF file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	const char *elf_filename = argv[1];
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2)
		error_exit_elf(98, "Usage: elf_heaader elf_filename");
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
		error_exit_elf(98, "Error: Cannot open file.");
	bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes_read != sizeof(Elf64_Ehdr) ||
			memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		error_exit_elf(98, "Error: Not a valid ELF file.");
	print_elf_header_info(&header);
	close(fd);

	return (0);
}
