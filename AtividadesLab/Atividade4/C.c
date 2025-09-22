struct Livro {
    char titulo[50];
    char autor[50];
    int anoPublicacao;
};

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    printf("Array de inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n\n");

    struct Livro livro1;
    strcpy(livro1.titulo, "O Senhor dos Aneis");
    strcpy(livro1.autor, "J.R.R. Tolkien");
    livro1.anoPublicacao = 1954;

    printf("Livro:\n");
    printf("Titulo: %s\nAutor: %s\nAno: %d\n",
           livro1.titulo, livro1.autor, livro1.anoPublicacao);

    return 0;
}