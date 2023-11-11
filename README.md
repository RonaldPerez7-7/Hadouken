# Simulación de Hadouken de Ken en C++.

Este repositorio alberga el proyecto de simulación de un ataque de Ken, el famoso "Hadouken", implementado en el lenguaje de programación C++. La implementación se ha simplificado para facilitar su comprensión y por razones explicadas más adelantes.


## Contenido del Repositorio.
### `GL Code` 
Contiene el código fuente del proyecto. Explora esta carpeta para revisar y entender la lógica detrás de la simulación del ataque de Ken.

### `GL Files` 
Aquí se encuentran los archivos esenciales para la ejecución del programa. Asegúrate de revisar esta carpeta para garantizar que tienes todos los archivos necesarios para la simulación.

## Aclaraciones sobre el code.
Inicialmente, la intención era llevar a cabo un proyecto que incluyera el diseño tridimensional (3D) tanto de Ken como del Hadouken para la parte gráfica del modelo. Sin embargo, debido a inconvenientes externos, no fue posible obtener el diseño 3D deseado. Ante esta situación, se tomó la decisión de realizar una demostración alternativa mediante la creación de un modelo 3D simplificado de una cabeza, representado en el archivo "Head.txt". En esta representación, la cabeza de color verde simboliza de manera estática a Ken, mientras que la cabeza de color azul representa hipotéticamente el Hadouken en movimiento. Este enfoque se adoptó para ofrecer una demostración visual a pesar de las limitaciones en la obtención del diseño 3D originalmente planeado.

## Caracteticticas.
- Independientemente de la posición en la que se encuentre Ken, el Hadouken siempre se generará y lanzará desde su ubicación específica. Este diseño permite una representación consistente y predecible del lanzamiento del Hadouken, ofreciendo una demostración visual coherente sin importar la posición exacta de Ken en el entorno tridimensional.

- La finalización del ataque de Hadouken se manejará de manera que no se pueda iniciar otro Hadouken hasta que el primero haya impactado o llegado al final del escenario. Esta lógica asegura que cada ataque se complete antes de permitir el inicio de otro, garantizando un comportamiento coherente y respetando la secuencia lógica del juego.

- Para ejecutar el Hadouken en esta simulación, es necesario seguir la siguiente secuencia de teclas: 
1. Presionar la tecla "J" para representar la dirección hacia abajo.
2. A continuación, presionar la tecla "K" para indicar la dirección hacia adelante.
3. Finalmente, presionar la tecla "L" para simbolizar el puño.
Esta secuencia de teclas "J", "K", "L" constituye la combinación necesaria para llevar a cabo el Hadouken en la simulación, siguiendo la lógica y la secuencia establecida para la representación de acciones en el juego.

- Se incorpora una lógica crucial en el juego donde las teclas 'j', 'k', 'l' deben ser presionadas en secuencia dentro de un límite de tiempo establecido para activar la acción asociada al ataque de Ken. Si la secuencia se rompe o si el tiempo excede el límite permitido, se reinicia el proceso, asegurando así que la ejecución del Hadouken esté sujeta a una secuencia precisa y oportuna por parte del jugador.
