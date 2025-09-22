
//--Primeiro Enunciado--//
```go
package main

import (
    "fmt"
    "time"
)

func escrever(texto string) {
    for i := 0; i < 5; i++ {
        fmt.Println(texto, i)
        time.Sleep(time.Millisecond * 500)
    }
}

func main() {
    go escrever("Corrotina")  // executa em paralelo
    escrever("Fun��o normal") // executa no fluxo principal
}
```

3. Compile e execute o programa com:
   ```bash
   go run main.go
   ```


//--Atividade--//
/* O que acontece com a ordem das mensagens exibidas?
As mensagens n�o seguem uma ordem fixa; 
os prints da corrotina e da fun��o normal aparecem intercalados.

Por que as mensagens se intercalam?
Porque a corrotina (go escrever) � executada em paralelo ao fluxo principal, 
permitindo que ambas as fun��es avancem ao mesmo tempo.
O time.Sleep ajuda a perceber melhor a altern�ncia, 
mas n�o controla a ordem exata de execu��o.

Rela��o com corrotinas:
Corrotinas s�o rotinas leves de execu��o concorrente dentro do mesmo programa. 
Elas permitem que diferentes trechos do c�digo sejam executados de forma simult�nea, 
sem criar processos ou threads pesadas.
Esse comportamento � exatamente o que vemos na execu��o: 
o programa principal e a corrotina compartilham o tempo de CPU, alternando entre si. */



