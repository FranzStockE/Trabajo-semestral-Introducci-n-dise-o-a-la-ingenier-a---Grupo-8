### Información del Equipo
- **Integrantes:**
  - Ignacio Huenchullan - [Rol]
  - Benjamin Reyes - [Rol]
  - Franz Stock - [Rol]
  - Agustín Vergara - [Rol]
  - Vicente Lemus - [Rol]

- **ODS Seleccionado:** 11 – Ciudades y comunidades sostenibles (meta 11.5)
- **Problema a resolver:** En Santiago, las lluvias generan inundaciones por sumideros obstruidos y por una respuesta tardía. En una encuesta a 20 personas, 12 (60%) señalaron las inundaciones como su mayor problema cuando llueve.

### Descripción del Proyecto
**P.O.I.S. – Prevención de Obstrucción e Inundación de Sumideros.**
Dispositivo basado en Arduino que se instala en sumideros de aguas lluvias para detectar, antes de que ocurra la inundación, la obstrucción de la reja y el aumento del nivel de agua. Usa un sensor ultrasónico (HC-SR04) para medir la distancia al agua y un sensor de obstáculo (KY-032) para detectar obstrucciones en la parte superior. Se fija a las paredes del sumidero con un soporte orientable impreso en 3D.

En esta etapa el prototipo lee los sensores y muestra los valores por monitor serial; el aviso al llegar a cierto nivel es la etapa siguiente.

### Estado del Proyecto
- **Versión actual:** Evaluación 2 (prototipo funcional)
- **Última actualización:** 29/10/2026
- **Estado:** Prototipo funcional en desarrollo

---

## Estructura del Repositorio
```
├── hardware/          # Circuitos, esquemas y BOM
├── software/          # Código Arduino y librerías
├── diseno_3d/        # Modelos Fusion 360 y renders
├── testing/          # Validación con usuarios
├── documentacion/    # Reportes y presentación
└── iteraciones/      # Historial de versiones
```

---

## Inicio Rápido

### Requisitos Previos
- Arduino IDE 2.x
- Fusion 360
- Librerías: IRremote y VL53L0X (Pololu)

### Instalación
1. Clonar el repositorio
2. Instalar las librerías IRremote y VL53L0X desde el Gestor de Librerías del Arduino IDE
3. Abrir `software/src/main/main.ino` y cargarlo en la placa Arduino UNO
4. Abrir el Monitor Serial a 9600 baudios para ver las lecturas

---

## Entregables Evaluación 2

| Entregable | Ubicación |
|---|---|
| Modelo 3D (espacio y fijación de la placa Arduino, ubicación de sensores) | `diseno_3d/fusion360/` y `diseno_3d/renders/` |
| Código Arduino comentado | `software/src/main/main.ino` |
| Circuito funcionando (video) | `hardware/` y `testing/evidencias/` |
| Presentación | `documentacion/presentacion/` |

---

## Licencia
Este proyecto es desarrollado como parte del curso TEI201 - Facultad de Ingenieria y Ciencias - Universidad Adolfo Ibañez
