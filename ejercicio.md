# Ejercicio 1

- Hacer un programa que imprima la suma de los primeros 10 numeros. Del 1 al 10. En lo posible investigar el uso de FOR para esto.

> El modulo es el simbolo %, -unario (-a) y -binario (a-b)

# Ejercicio 2

- Hacer un programa que use todos los operadores aritmeticos +-\*/%()

---

# Apunte

## Archivos C: Roles

- **`main.c`**: Contiene la función principal `main()`. Es el **punto de inicio** de la ejecución del programa.

- **`function.h`**: Contiene solo las **declaraciones** (prototipos) de las funciones. Es el **contrato** para usar las funciones.

- **`function.c`**: Contiene la **implementación** (el código real) de las funciones declaradas. Es la **lógica** del programa.

> Estructura: **main.c <--- function.h <---function.c**

# Ejercicio 3

### Revisar los siguientes comandos en este orden de importancia

## Comandos Esenciales de Git

### Comandos Clave de Git (Ficha Rápida)

- **`git init`**

  - **Propósito:** Inicializar un nuevo repositorio Git vacío en el directorio actual.
  - **Ejemplo:** `git init`

- **`git clone <url>`**

  - **Propósito:** Descargar una copia local completa de un repositorio remoto existente.
  - **Ejemplo:** `git clone https://github.com/usuario/proyecto.git`

- **`git add <archivo(s)>`**

  - **Propósito:** Preparar los cambios para el próximo commit (Área de Staging).
  - **Ejemplo 1 (Archivo):** `git add index.html`
  - **Ejemplo 2 (Todos):** `git add .`

- **`git commit -m "mensaje"`**

  - **Propósito:** Guardar la instantánea de los cambios preparados en el historial.
  - **Ejemplo:** `git commit -m "Implementada la funcionalidad de login"`

- **`git push`**

  - **Propósito:** Subir los commits locales a la rama correspondiente en el repositorio remoto.
  - **Ejemplo:** `git push origin main`

- **`git checkout <rama/commit>`**

  - **Propósito:** Cambiar el entorno de trabajo entre diferentes ramas o puntos del historial.
  - **Ejemplo 1 (Cambiar rama):** `git checkout desarrollo`
  - **Ejemplo 2 (Crear y cambiar):** `git checkout -b nueva-feature`

- **`git branch <nombre>`**
  - **Propósito:** Crear, listar o eliminar ramas de trabajo.
  - **Ejemplo 1 (Crear):** `git branch correccion-bug-123`
  - **Ejemplo 2 (Listar):** `git branch`

# Para ver que cuenta de git estoy usando

  ```git config --global user.email```

# Para conectarme por ssh

  ```ssh -T git@github.com```

# =============================================

# CONFIGURACIÓN SSH PARA GITHUB (todo en uno)

# ================================

# 1. Generar clave SSH nueva

ssh-keygen -t ed25519 -C "<tuemail@que.usas.en.github.com>"

# → Enter para ruta por defecto

# → Enter + Enter si NO quieres passphrase (o pon una si quieres)

# 2. Iniciar agente SSH

eval "$(ssh-agent -s)"

# 3. Añadir la clave al agente

ssh-add ~/.ssh/id_ed25519

# 4. Copiar clave pública al portapapeles (prueba en orden)

cat ~/.ssh/id_ed25519.pub | wl-copy 2>/dev/null || \
cat ~/.ssh/id_ed25519.pub | xclip -sel clip 2>/dev/null || \
echo "=== COPIA ESTO MANUALMENTE ===" && cat ~/.ssh/id_ed25519.pub

# 5. → Abre esto en el navegador y pega la clave

echo "<https://github.com/settings/keys> → New SSH key → pega y guarda"

# 6. Probar conexión (¡el momento de la verdad!)

ssh -T <git@github.com>

ssh-keygen -t ed25519 -C "<tuemail@que.usas.en.github.com>"

# (Enter → Enter + Enter si no quieres passphrase)

eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519

# Copia la clave pública (prueba en orden hasta que funcione)

cat ~/.ssh/id_ed25519.pub | wl-copy 2>/dev/null || \
cat ~/.ssh/id_ed25519.pub | xclip -sel clip 2>/dev/null || \
cat ~/.ssh/id_ed25519.pub

# → Ve a <https://github.com/settings/keys> → New SSH key → pega → Add

ssh -T <git@github.com>

# Si sale “Hi tuusuario!” → listo para siempre
