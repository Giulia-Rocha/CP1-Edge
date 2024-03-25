# Projeto Vinheria

## Descrição 
Este Projeto consiste em um sistema de monitoramento de luminosidade do ambiente utilizando um Arduino Uno R3, um LDR, LEDs de diferentes cores (Amarelo, Vermelho e Verde) e ainda uma Buzina.

O objetivo é identificar a luminosidade do ambiente e alertar quando ultrapassa os limites estabelecidos.

O Arduino lê a intensidade da luz através do LDR e converte o valor lido proporcionalmente a uma escala definida.
Essa escala é então utilizada para acionar os diferentes LEDs e a buzina.

- Se a luminosidade for menor que 30%, acionará o LED verde, o que indica que a luminosidade está boa para os vinhos;

- Se a luminosidade estiver entre 31% e 60%, acionará o LED amarelo, o que indica que a luminosidade está em níveis de alerta;

- Se a luminosidade estiver maior quue 60%, acionará o LED vermelho e a buzina, o que indica algum problema urgente em relação a luminosidade no local em que os vinhos são armazenados e é necessário corrigi-lo o mais rápido possível. 


## Dependências
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
|1     |Placa de ensaio|


## Como Reproduzi-lo?

- Depois de reunir todos os materiais necessários siga este roteiro abaixo:
  - Monte seu sistema se guiando pela imagem a seguir:
    



