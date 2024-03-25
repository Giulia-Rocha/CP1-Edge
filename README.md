# Projeto Vinheria :wine_glass:

## Descrição :memo:
Este Projeto consiste em um sistema de monitoramento de luminosidade do ambiente utilizando um Arduino Uno R3, um LDR, LEDs de diferentes cores (Amarelo, Vermelho e Verde) e ainda uma Buzina.

O objetivo é identificar a luminosidade do ambiente e alertar quando ultrapassa os limites estabelecidos.

O Arduino lê a intensidade da luz através do LDR e converte o valor lido proporcionalmente a uma escala definida.
Essa escala é então utilizada para acionar os diferentes LEDs e a buzina.

- Se a luminosidade for menor que 30%, acionará o LED verde, o que indica que a luminosidade está boa para os vinhos;

- Se a luminosidade estiver entre 31% e 60%, acionará o LED amarelo, o que indica que a luminosidade está em níveis de alerta;

- Se a luminosidade estiver maior quue 60%, acionará o LED vermelho e a buzina, o que indica algum problema urgente em relação a luminosidade no local em que os vinhos são armazenados e é necessário corrigi-lo o mais rápido possível. 



## Dependências :briefcase:
### Materiais necessários

| Quantidade| Componente | 
|---------- |----------|
| 1         | Arduino Uno R3   |
| 1    | LDR (Fotorresistor)   | 
|1     | Resistor de 10 kOhm|
|3     | Resistores de 220 Ohm|
|1     | LED Vermelho |
|1     |LED Amarelo|
|1     |LED Verde|
|1     |Buzzer (Buzina)|
|      |Fios (Jumpers)|
|1     |Protoboard|


## Como Reproduzi-lo?

- Depois de reunir todos os materiais necessários siga este roteiro abaixo:
  
1. Montagem do Circuito:

- Conecte o Arduino Uno à protoboard.
- Conecte o LDR a um dos pinos analógicos do Arduino (por exemplo, A0).
- Conecte os LEDs aos pinos digitais do Arduino (por exemplo, 2, 3 e 4) através de resistores limitadores de corrente.
- Conecte o buzzer a um pino digital do Arduino (por exemplo, 5).
- A seguir, uma imagem para auxiliar na montagem:

<img src="https://github.com/Giulia-Rocha/CP1-Edge/blob/main/Checkpoint-1.png"  width="1500"/>



2. Codificação do Arduino:

- Abra o Arduino IDE ou utilize a plataforma online Tinkercad para escrever o código.
- Copie o [código fornecido](Codigo_Fonte.cpp) e cole no editor de código do Arduino.
- Verifique se os pinos definidos no código correspondem aos pinos físicos onde os componentes estão conectados.



3. Teste do Circuito:

- Carregue o código para o Arduino.
- Conecte o Arduino ao computador e alimente o circuito.
- Observe o comportamento dos LEDs e do buzzer conforme a intensidade da luz ambiente varia.




4. Calibração:

- Calibre o LDR para sua aplicação específica ajustando os valores de temperatura no código com base nas leituras do sensor em diferentes condições de luz e temperatura.





