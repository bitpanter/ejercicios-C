# Apuntes Operativos: C y Git

## Ejercicios de Programación C

### Ejercicio 1: Suma de Números
* Hacer un programa en C que imprima la suma de los primeros 10 números (del 1 al 10).
* **Nota:** Se recomienda usar el bucle `for`.
> El símbolo `%` es el operador **módulo**.

### Ejercicio 2: Uso de Operadores
* Hacer un programa que utilice todos los operadores aritméticos: `+`, `-`, `*`, `/`, `%`, `()`.

---

## Estructura de Archivos C (Separación de Roles)

* **`main.c`**: Contiene la función `main()`. Es el **punto de inicio**.
* **`function.h`**: Contiene las **declaraciones** (prototipos) de las funciones. Es el **contrato**.
* **`function.c`**: Contiene la **implementación** (lógica) de las funciones.

> **Flujo:** `main.c` incluye `function.h`, que está implementado en `function.c`.

---

## Comandos Esenciales de Git (Clave)

* **`git init`**: Inicializa un repositorio local.
* **`git clone <url>`**: Descarga un repositorio remoto.
* **`git add <archivo(s)>` / `git add .`**: Prepara cambios para el commit (staging).
* **`git commit -m "mensaje"`**: Guarda los cambios preparados en el historial.
* **`git push`**: Sube los commits locales al repositorio remoto.
* **`git checkout <ref>`**: Cambia ramas o puntos del historial.
* **`git branch <nombre>`**: Crea, lista o elimina ramas.

### Comprobaciones
* **Email de usuario:** `git config --global user.email`
* **Prueba SSH:** `ssh -T git@github.com`

---

## Configuración SSH para GitHub (Procedimiento Rápido)

1.  **Generar Clave:**
    ```bash
    ssh-keygen -t ed25519 -C "<tuemail@que.usas.en.github.com>"
    ```

2.  **Iniciar Agente y Añadir Clave:**
    ```bash
    eval "$(ssh-agent -s)"
    ssh-add ~/.ssh/id_ed25519
    ```

3.  **Copiar Clave Pública:** (Usar la opción que funcione en el sistema)
    ```bash
    cat ~/.ssh/id_ed25519.pub
    # Copiar manualmente la salida.
    ```

4.  **Acción Manual:**
    * Pegar la clave copiada en: `https://github.com/settings/keys`

5.  **Verificación Final:**
    ```bash
    ssh -T git@github.com
    # Si la respuesta es "Hi tuusuario!", la conexión es correcta.
    ```