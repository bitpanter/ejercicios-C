# Guía Técnica: Ejercicios y Configuración de Entorno

## Parte I: Ejercicios de Programación en C

### Ejercicio 1: Ciclos e Impresión
Desarrollar un programa que imprima la suma de los primeros 10 números enteros (del 1 al 10).
* **Requerimiento:** Investigar e implementar el bucle `for` para la resolución.

### Ejercicio 2: Operadores Aritméticos
Desarrollar un programa que implemente **todos** los siguientes operadores:
* Suma (`+`), Resta (`-`), Multiplicación (`*`), División (`/`).
* Módulo (`%`).
* Agrupación con paréntesis `()`.

> **Nota Técnica:**
> * El operador `%` devuelve el resto de la división.
> * El operador `-` actúa como **unario** (negación: `-a`) o **binario** (resta: `a - b`).

---

## Parte II: Estructura de Proyectos en C

### Roles de Archivos
Para mantener el código modular, respetá esta división:

1.  **`main.c` (Punto de Entrada)**
    * Contiene la función `main()`.
    * Es donde inicia la ejecución del proceso.

2.  **`function.h` (Interfaz/Contrato)**
    * Contiene solo las **declaraciones** (prototipos) de las funciones.
    * Define *qué* hace el código, no *cómo* lo hace.

3.  **`function.c` (Implementación)**
    * Contiene el código real y la lógica de las funciones declaradas en el `.h`.

> **Regla de Oro:** `main.c` incluye a `function.h`. `function.c` implementa lo definido en `function.h`.

---

## Parte III: Protocolos Git y GitHub

### 1. Comandos Esenciales (Cheat Sheet)

| Comando | Propósito | Ejemplo de uso |
| :--- | :--- | :--- |
| `git init` | Inicializa un repositorio local vacío. | `git init` |
| `git clone <url>` | Clona un repositorio remoto completo. | `git clone https://github.com/user/repo.git` |
| `git add <files>` | Agrega cambios al área de preparación (stage). | `git add .` |
| `git commit -m "msg"` | Confirma los cambios en el historial. | `git commit -m "Fix login logic"` |
| `git push` | Envía los commits al remoto. | `git push origin main` |
| `git checkout <rama>` | Cambia de rama o estado. | `git checkout develop` |
| `git branch` | Gestiona ramas (crear/listar). | `git branch` / `git branch feature-x` |

### 2. Verificación de Identidad
Confirmá quién está firmando los commits (Ver Bloque 2).

---

## Parte IV: Configuración de Seguridad (SSH)

Seguí esta secuencia exacta para autenticarte con GitHub sin usar contraseñas. **Los comandos para cada paso están en el Bloque 2.**

### Paso 1: Generar par de claves (Algoritmo Ed25519)
### Paso 2: Activar el Agente SSH
### Paso 3: Añadir la clave privada al agente
### Paso 4: Copiar clave pública (Comando complejo)
### Paso 5: Pegar la clave en GitHub
### Paso 6: Verificación Final


# COMANDOS DE CONFIGURACIÓN Y SSH PARA COPIAR DIRECTO

# 1. Verificación de Identidad (Git Config)
git config --global user.name
git config --global user.email

# 2. Generar par de claves (Paso 1 SSH)
# IMPORTANTE: Reemplazá el email
ssh-keygen -t ed25519 -C "tuemail@ejemplo.com"

# 3. Activar el Agente SSH (Paso 2 SSH)
eval "$(ssh-agent -s)"

# 4. Añadir la clave privada al agente (Paso 3 SSH)
ssh-add ~/.ssh/id_ed25519

# 5. Copiar la clave pública (Paso 4 SSH)
# Este comando intenta copiar al portapapeles según tu sistema operativo.
cat ~/.ssh/id_ed25519.pub | wl-copy 2>/dev/null || \
cat ~/.ssh/id_ed25519.pub | xclip -sel clip 2>/dev/null || \
cat ~/.ssh/id_ed25519.pub | pbcopy 2>/dev/null || \
(echo ">>> COPIA LA LÍNEA DE ABAJO MANUALMENTE <<<" && cat ~/.ssh/id_ed25519.pub)

# 6. Verificación Final (Paso 6 SSH)
ssh -T git@github.com