# Sequenciamento-de-Genoma

  Todos   os   seres   humanos   compartilham   aproximadamente   99,9%   dos   mesmos   nucleotídeos em   seu   genoma   e   até   a   mesma   ordem   como   são   apresentados.   Portanto,   se   apenas   soubermos   alguns genomas   completos   de   uma   espécie   podemos   ter   os   principais   componentes   para   identificar   o   genoma   de toda a espécie. Determinar   o   genoma   completo   de   um   organismo   (chamado   de   sequenciamento   de   genoma)   é   uma   das principais   tarefas   em   bioinformática.   Infelizmente,   nós   não   possuímos   tecnologia   microscópica   que   consiga realizar   um   zoom   a   nível   de   nucleotídeo   e   determinar   a   sequência   de   nucleotídeos   de   um   genoma,   um   por vez.   Entretanto,   pesquisadores   podem   aplicar   metódos   bioquímicos   para   gerar   e   identificar   pequenos fragmentos   de   DNA   que   chamamos   de   reads.   Após   obter   uma   grande   coleção   de   reads   de   múltiplas   cópias do   mesmo   genoma,   o   objetivo   é   reconstruir   o   genoma   a   partir   destes   pequenos   fragmentos   de   DNA.   Este processo é chamado de fragment assembly. 
  
 
Entendido   o   contexto   do   nosso   problema,   vamos   ao   desafio:   Para   uma   coleção   de   strings,   uma   string   de maior   dimensão   contendo   todos   as   strings   menores   como   substrings   é   chamado   de   superstring.   Para   fins de   simplicidade,   vamos   considerar   que   a   superstring   de   menor   dimensão   possível   sobre   uma   coleção   de reads é um possível candidato a cromossomo (cromossomo é formado por uma sequência de bases). 
 
Dado   n   strings   de   DNA   cujo   o   tamanho   não   ultrupassem   mais   de   1000   bases   e   que   a   partir   destes   n   reads seja   possível   construir   um   cromossomo   inteiro   colando   pares   de   reads   que   se   sobrepõem   mais   do   que metade   do   seu   tamanho,   o   objetivo   é   retornar   a   superstring   de   menor   dimensão   possível   contendo   todas   as strings (isto equivale neste problema a conseguirmos reconstruir um cromossomo). 
 
EXEMPLO de Entrada (input.txt): 
ATTAGACCTG 
CCTGCCGGAA 
AGACCTGCCG 
GCCGGAATAC
 
EXEMPLO de Saída (output.txt): 
ATTAGACCTGCCGGAATAC
