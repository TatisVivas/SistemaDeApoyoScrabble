# 📚 Sistema de Apoyo para Scrabble

Proyecto académico desarrollado en el curso **Estructuras de Datos** de la **Pontificia Universidad Javeriana**, cuyo objetivo es implementar un sistema en consola para apoyar el juego de mesa **Scrabble**, permitiendo búsqueda, validación y generación de palabras, así como cálculo de puntajes y sugerencias estratégicas.

---

## 🎯 Objetivo del Proyecto
Desarrollar una aplicación de consola que permita:
- Gestionar diccionarios de palabras.
- Buscar por prefijos y sufijos.
- Calcular puntajes de palabras.
- Generar posibles combinaciones a partir de letras dadas.
- Simular herramientas de apoyo usadas en torneos de Scrabble.

---

## 📂 Componentes del Sistema

### 1️⃣ Componente 1: Configuración del Juego
- **`inicializar diccionario.txt`** → Carga y valida un diccionario de palabras en inglés.
- **`iniciar_inverso diccionario.txt`** → Carga el diccionario con palabras invertidas.
- **`puntaje palabra`** → Calcula el puntaje de una palabra válida.
- **`salir`** → Finaliza la aplicación.

### 2️⃣ Componente 2: Búsqueda de Palabras
- **`iniciar_arbol diccionario.txt`** → Inicializa un árbol de prefijos.
- **`iniciar_arbol_inverso diccionario.txt`** → Inicializa un árbol de sufijos (palabras invertidas).
- **`palabras_por_prefijo prefijo`** → Lista palabras que comienzan con un prefijo.
- **`palabras_por_sufijo sufijo`** → Lista palabras que terminan con un sufijo.

### 3️⃣ Componente 3: Combinaciones de Letras
- **`grafo_de_palabras`** → Construye un grafo donde nodos son palabras que difieren en una sola letra.
- **`posibles_palabras letras`** → Genera palabras válidas con las letras dadas (incluyendo comodín `?`).

---

## 🖥 Interacción con el Sistema
- El sistema funciona en **modo consola** con el prompt `$`.
- Incluye el comando **`ayuda`** para listar comandos y su uso.
- Todos los mensajes siguen el formato especificado (éxito, error, etc.).

---

## 📅 Entregas y Evaluación

| Entrega | Semana | Alcance | Componentes |
|---------|--------|---------|-------------|
| **0**   | 3      | Interfaz de usuario y validación de comandos | N/A |
| **1**   | 6      | Implementación completa del Componente 1 | Configuración |
| **2**   | 12     | Componentes 1 y 2 completos | Configuración + Búsqueda |
| **3**   | 18     | Proyecto completo | Todos los componentes |

Cada entrega incluye:
- Documento de diseño.
- Plan de pruebas.
- Código fuente en C++ (GNU g++ ≥ 4.0.0).
- Sustentación individual.

---

## 🛠 Tecnologías
- **Lenguaje:** C++  
- **Compilador:** GNU g++ (v4.0.0 o superior)  
- **Entrada/Salida:** Consola interactiva (modo texto)

---

## 🔧 Compilación y Ejecución

### Requisitos Previos
- Compilador **clang++** o **g++** instalado
- Sistema operativo compatible (Windows, Linux, macOS)
- Archivos de diccionario (`.txt`) con palabras en inglés

### Compilación
El proyecto incluye un **Makefile** que facilita la compilación:

```bash
# Compilación estándar
make

# Compilación con información de depuración
make main-debug

# Limpiar archivos compilados
make clean
```

**Compilación manual (alternativa):**
```bash
clang++ -g -Wmost -Werror *.cpp -o main
```

### Ejecución
Una vez compilado, ejecutar el programa:

```bash
# En Linux/macOS
./main

# En Windows
main.exe
```

### Funcionamiento
1. **Inicio del Sistema:**
   - Al ejecutar, el sistema muestra un mensaje de bienvenida
   - Aparece el prompt `$` esperando comandos del usuario

2. **Comandos Básicos:**
   ```
   $ ayuda                              # Muestra la lista de comandos disponibles
   $ inicializar englishWords-0.txt     # Carga un diccionario normal
   $ iniciar_inverso englishWords-0.txt # Carga un diccionario invertido
   $ puntaje HELLO                      # Calcula el puntaje de una palabra
   $ salir                              # Termina la aplicación
   ```

3. **Flujo de Trabajo Típico:**
   - Inicializar al menos un diccionario
   - Realizar consultas (puntajes, búsquedas, etc.)
   - Usar `ayuda` para ver comandos disponibles
   - Finalizar con `salir`

### Archivos de Diccionario
El sistema espera archivos de texto plano con:
- Una palabra por línea
- Solo caracteres alfabéticos (a-z, A-Z)
- Ejemplos incluidos: `englishWords-0.txt` a `englishWords-5.txt`

---

## 👥 Autores
Proyecto desarrollado como parte de la asignatura **Estructuras de Datos**, Departamento de Ingeniería de Sistemas, Pontificia Universidad Javeriana.

---

## 📜 Licencia
Uso académico. Prohibida su reproducción o distribución sin autorización del equipo desarrollador y de la Pontificia Universidad Javeriana.
