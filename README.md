### Motor LED em C++ (Arduino)
![Imagem do Motor LED](https://github.com/EduardoDosSantosFerreira/motor-led/blob/main/mtr.png)

Este código em C++ para Arduino simula o funcionamento de um motor de automóvel utilizando LEDs e um potenciômetro como entrada. Aqui está uma explicação passo a passo do funcionamento:

1. **Biblioteca LiquidCrystal:** A primeira linha inclui a biblioteca LiquidCrystal, que é utilizada para controlar o display LCD.

2. **Inicialização do Display:** O display LCD é inicializado com os pinos 8, 9, 10, 11, 12 e 13 como pinos de controle.

3. **Variáveis de RPM e Marcha:** São declaradas duas variáveis, `rpm` e `gear`, para armazenar a velocidade (RPM) e a marcha do "motor".

4. **Configuração Inicial:** No `setup()`, são configurados os pinos 2 a 7 como saídas, que representam os LEDs simulando as velas de ignição do motor.

5. **Loop Principal (`loop()`):**
   - **Leitura do Potenciômetro:** O valor do potenciômetro (sensor de rotação) é lido e armazenado na variável `sensorValue`.
   - **Mapeamento da RPM:** Com base no valor lido, a variável `rpm` é calculada usando a função `map()`, ajustando os valores para um intervalo de 800 a 8000 RPM.
   - **Mapeamento da Marcha:** A variável `gear` é ajustada com base no valor do potenciômetro, simulando um carro de 6 marchas.
   - **Exibição no Display:** As variáveis `rpm` e `gear` são exibidas no display LCD, mostrando a velocidade e a marcha.
   - **Controle dos LEDs:** Os LEDs representando as velas de ignição são ligados e desligados em sequência, simulando o funcionamento do motor de acordo com a marcha e a RPM calculadas.

6. **Delay Proporcional:** O tempo de delay entre cada acionamento dos LEDs é proporcional à leitura do potenciômetro, simulando o tempo de ignição do motor.

Este código é um exemplo interessante de como usar um Arduino para simular o funcionamento de um motor de automóvel, demonstrando conceitos de leitura analógica, controle de LEDs e uso de display LCD.
