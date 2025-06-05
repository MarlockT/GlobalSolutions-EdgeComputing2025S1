# Edge Computing
Enchentes no Brasil: Tecnologia como Solução para Tragédias Anunciadas. 

Integrantes: Kathleen Lourenço, Nuno Henrique, Yasmim Amorim.

Descrição do problema:
As enchentes são eventos caracterizados pelo acúmulo excessivo de água em determinadas áreas, geralmente causados por chuvas intensas que excedem a capacidade de absorção do solo ou de escoamento dos sistemas de drenagem urbana. Os alarmes de água, também conhecidos como sistemas de alerta para enchentes, têm como principal objetivo avisar a população com antecedência sobre o risco de transbordamento de rios, elevação do nível da água ou inundações iminentes. No entanto, em muitos casos, esses sistemas falham ou simplesmente não funcionam quando mais são necessários.

Visão geral da solução:
A solução proposta é um sistema inteligente de alerta para enchentes, voltado para a prevenção de desastres e a rápida resposta em situações críticas. Ele parte da implantação de alarmes que serão ativados quando a chuva ocorrente atingir 2 metros, exibindo o status da metragem da água. Possui como foco principal a proteção de vidas e redução dos danos causados por inundações, tais como a perda de bens materiais e deslocamento de famílias desabrigadas, especialmente em regiões urbanas vulneráveis.
O sistema funciona por meio do monitoramento contínuo do volume de chuva através de sensores instalados em pontos estratégicos da cidade. Quando a chuva acumulada atinge o nível de 2 metros, um alerta automático é disparado no site da empresa Neroh.

No sistema foram ultilizados três leds, oito cabos jumper, três resistores, um Sensor Ultrassônico de Distância HC-SR04, uma breadboard e um arduíno Uno. 

Este sensor possui trilhas condutivas que detectam a presença de água. Conforme o nível da água sobe, mais trilhas são submersas, alterando a resistência elétrica e, consequentemente, o sinal analógico enviado ao Arduino.
O Arduino lê o valor analógico do sensor através de uma de suas portas analógicas, valor que varia conforme o nível de água detectado.
Com base no valor lido, o Arduino acende diferentes LEDs para indicar o nível de água:

LED Verde: Nível baixo.

LED Amarelo: Nível médio.

LED Vermelho: Nível alto.

O código no Arduino define limites para os diferentes níveis de água e acende os LEDs correspondentes quando esses limites são atingidos. É possível mudar esses limites conforme desejado para maior flexibilidade e escalabilidade do sistema.

![image](https://github.com/user-attachments/assets/181acd8a-a235-48b2-ae68-a794b3c77388)


🔗 Link do tinkercad:
[https://www.tinkercad.com/things/hYL2REUq9Us-globalsolutions-s1-2025?sharecode=WGa1uyAIIQ_29DZNMCfQTbB74YsnG4vd8GfGRhOmsio]
