# COMMAND INTERPRETER IN C

Este repositorio possui o trabalho prático da disciplina de Sistema Operacional no curso de Ciência da Computação na UFSJ de 2022.

## Requisitos

<div>
  <img src="https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&amp;logo=C&amp;logoColor=white" alt="C">
  <img src="https://img.shields.io/badge/Gcc-323330?style=for-the-badge&amp;logo=Gcc&amp;logoColor=white" alt="GCC">
</div>

## Instalação

Todas as instalações abaixo são referentes ao Ubuntu

### Install GCC

O GCC geralmente já está instalado no Ubuntu, mas você pode verificar a versão digitando:

     $ gcc --version

Se não estiver instalado, você pode instalar usando o apt:

     $ sudo apt update
     $ sudo apt install build-essential

## Uso

Entre no diretorio via terminal

    $ cd Command_interpreter/

E depois execute os seguintes comandos:

    $ gcc main.c -o command
    $ ./command


## Status do Projeto

**Status do Projeto: Parcialmente Concluído**

O projeto está funcional em partes, a aplicação executa a maioria dos comandos de um terminal, todavia, não contempla todos os comandos presentes em um terminal padrão.

No entanto, as modificações e ajustes serão executadas tão rapido quanto possivel.

**Conquistas Atuais:**
- Funcionalidades básicas implementadas com sucesso.
- Interface do usuário (UI) está operacional.

**Próximos Passos:**
- Realizar correções de bugs.
- Implementar recursos adicionais conforme especificações.
- Refatorar código para aumentar a eficiência e manutenibilidade.