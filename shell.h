#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

#define DELIM " \t\n"

extern char **environ;

char *read_line(void);
void freearray2D(char **array);
char *_strcpy(char *dest, const char *src);
char *_getenv(char *variable);
char *_getpath(char *command);
void print_error(char *name, char *cmd, int idx);

char *_strcat(char *dest, const char *src);
int _execute(char **command, char **argv, int idx);
char **tokenizer(char *line);

int is_builtin(char *command);
void handle_builtin(char **command, char **argv, int *status, int idx);
void exit_shell(char **command, char **argv, int *status, int idx);
void print_env(char **command, int *status);

int is_positive_number(char *str);
int _atoi(char *str);

int _strlen(const char *s);
int _strcmp(const char *s1, const char *s2);
char *_strdup(const char *str);
char *_itoa(int o);
void reverse_string(char *str, int len);


#endif
