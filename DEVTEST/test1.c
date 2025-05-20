#include  <stdint.h>
#include  <stdio.h>

struct Usuario {
    char nome[100];
    char dataNascimento[11]; // Formato: DD/MM/AAAA
    char email[100];
};

const char* calcularSigno(int dia, int mes) {
    if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) return "Aquário";
    if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) return "Peixes";
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) return "Áries";
    if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) return "Touro";
    if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) return "Gêmeos";
    if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) return "Câncer";
    if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) return "Leão";
    if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) return "Virgem";
    if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) return "Libra";
    if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) return "Escorpião";
    if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) return "Sagitário";
    if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) return "Capricórnio";
    return "Data inválida";
}

int main() {
    struct Usuario usuario;

    printf("Digite seu nome: ");
    fgets(usuario.nome, sizeof(usuario.nome), stdin);
    usuario.nome[strcspn(usuario.nome, "\n")] = 0; // Remove a nova linha

    printf("Digite seu e-mail: ");
    fgets(usuario.email, sizeof(usuario.email), stdin);
    usuario.email[strcspn(usuario.email, "\n")] = 0; // Remove a nova linha

    printf("Digite sua data de nascimento (DD/MM/AAAA): ");
    fgets(usuario.dataNascimento, sizeof(usuario.dataNascimento), stdin);
    usuario.dataNascimento[strcspn(usuario.dataNascimento, "\n")] = 0; // Remove a nova linha

    // Extrair dia e mês da data de nascimento
    int dia, mes;
    sscanf(usuario.dataNascimento, "%d/%d", &dia, &mes);

    // Calcular signo
    const char* signo = calcularSigno(dia, mes);

    // Exibir informações
    printf("\nNome: %s\n", usuario.nome);
    printf("E-mail: %s\n", usuario.email);
    printf("Data de Nascimento: %s\n", usuario.dataNascimento);
    printf("Seu signo é: %s\n", signo);

    return 0;
}