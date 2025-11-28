# Guía Técnica

## C: Ejercicios

### E1: Ciclos (Suma 1 a 10)
* **Tarea:** Calcular la suma de los primeros 10 enteros usando un bucle `for`.

### E2: Operadores Aritméticos
* **Tarea:** Implementar `+`, `-`, `*`, `/`, `%` (Módulo), y `()` (Agrupación).

---

## C: Estructura de Archivos

* **`main.c`**: Contiene `main()`. Punto de entrada.
* **`function.h`**: Contiene **declaraciones** (prototipos). Es la interfaz.
* **`function.c`**: Contiene la **lógica** e implementación de las funciones.

> **Regla:** `main.c` incluye a `function.h`.

---

## Git y GitHub

### Comandos Esenciales

| Comando | Propósito |
| :--- | :--- |
| `git init` | Inicializa repositorio local. |
| `git clone <url>` | Clona repositorio remoto. |
| `git add .` | Agrega cambios al *stage*. |
| `git commit -m "msg"` | Confirma los cambios. |
| `git push` | Envía commits al remoto. |
| `git checkout <rama>` | Cambia de rama. |

## 🔑 Configuración de Seguridad y Autenticación (SSH)

La autenticación SSH permite conectar tu máquina local con GitHub sin ingresar la contraseña en cada interacción. Esto se logra mediante el uso de un par de claves: una **privada** (se queda en tu máquina) y una **pública** (se registra en GitHub).

### 📝 Procedimiento Detallado

**Paso 1: Generar el Par de Claves SSH (Ed25519)**

Se crea el par de claves. Se recomienda el algoritmo **Ed25519** por su seguridad. Reemplazá el correo por el asociado a tu cuenta de GitHub.

**Paso 2: Iniciar el Agente SSH**

El agente SSH (ssh-agent) se encarga de gestionar tus claves y mantenerlas en memoria para no tener que ingresarlas constantemente.

**Paso 3: Añadir la Clave Privada al Agente**

Se le indica al agente SSH la ubicación de tu clave privada para que pueda usarla. La ruta predeterminada es `~/.ssh/id_ed25519`.

**Paso 4: Copiar la Clave Pública**

La clave **pública** (`id_ed25519.pub`) es la que debes registrar en GitHub. Se utiliza un comando que intenta copiar automáticamente el contenido al portapapeles según tu sistema operativo.

**Paso 5: Registrar la Clave Pública en GitHub**

Debes ir a la configuración de tu cuenta de GitHub, encontrar la sección **"SSH and GPG keys"** y pegar el contenido de tu clave pública.

**Paso 6: Verificación de la Conexión**

Una vez registrada la clave en GitHub, este comando de prueba confirma que la conexión SSH es correcta y la autenticación funciona.

---

### 📋 Comandos Directos para Ejecutar

```bash
# 1. Generar Claves SSH (Paso 1)
# ¡IMPORTANTE! Reemplazar el email por el de tu cuenta de GitHub
ssh-keygen -t ed25519 -C "tu_email_de_github@ejemplo.com"

# 2. Iniciar el Agente SSH (Paso 2)
eval "$(ssh-agent -s)"

# 3. Añadir la Clave Privada (Paso 3)
ssh-add ~/.ssh/id_ed25519

# 4. Copiar Clave Pública (Paso 4 - Se prueba compatibilidad con portapapeles)
# Si no funciona automáticamente, el comando mostrará la clave para copiarla manualmente.
cat ~/.ssh/id_ed25519.pub | wl-copy 2>/dev/null || \
cat ~/.ssh/id_ed25519.pub | xclip -sel clip 2>/dev/null || \
cat ~/.ssh/id_ed25519.pub | pbcopy 2>/dev/null || \
(echo ">>> COPIA MANUALMENTE LA CLAVE QUE SIGUE: " && cat ~/.ssh/id_ed25519.pub)

# 6. Verificación Final (Paso 6)
ssh -T git@github.com