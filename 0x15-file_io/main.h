#ifndef MAIN_H
#define MAIN_H

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);
void func_supplement(long int fd_read, long int fd_open1, long int fd_open2,
char *argv[], char *buffer);

#endif /* MAIN_H */
