# 🧮 Calculadora em C

> Calculadora desenvolvida em linguagem C que roda diretamente no terminal. Projeto criado para praticar lógica de programação, funções e compilação em C.

---

## ✨ Funcionalidades

- ➕ Soma
- ➖ Subtração
- ✖️ Multiplicação
- ➗ Divisão (com proteção contra divisão por zero)
- 🔢 Potência
- √ Raiz quadrada (com proteção contra números negativos)
- 📋 Histórico dos cálculos realizados na sessão

---

## 🖥️ Como executar

### ⚙️ Pré-requisitos

- Compilador GCC instalado (MinGW no Windows)

### 🔨 Compilar

```bash
gcc calculadora.c -o calculadora -lm
```

### ▶️ Rodar

```bash
.\calculadora.exe
```

---

## 📖 Como usar

1. 🟢 Ao abrir o programa, um menu vai aparecer no terminal
2. 🔢 Digite o número da operação desejada e pressione Enter
3. ✏️ Digite os números quando solicitado
4. ✅ O resultado aparece na tela
5. 🔄 Escolha se quer continuar calculando ou voltar ao menu
6. 📋 Digite 7 para ver o histórico de cálculos da sessão
7. 🔴 Digite 0 para sair

---

## 🛠️ Tecnologias

| Biblioteca | Uso |
|------------|-----|
| `stdio.h`  | Entrada e saída de dados |
| `stdlib.h` | Função system() para limpar tela |
| `math.h`   | Funções pow() e sqrt() |


## 📁 Estrutura do projeto
📂 Calculadora
┣ 📄 calculadora.c   — código fonte
┣ 📄 calculadora.exe — executável gerado após compilar
┗ 📄 README.md       — documentação do projeto
---

## 👤 Autor

Feito por **Guilherme S. Ferreira**

[![GitHub](https://img.shields.io/badge/GitHub-Guilherme--S--Ferreira-181717?style=flat&logo=github)](https://github.com/Guilherme-S-Ferreira)

---

⭐ Se gostou do projeto, deixa uma estrela no repositório!

---
