
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
    escrever("Função normal") // executa no fluxo principal
}
```

3. Compile e execute o programa com:
   ```bash
   go run main.go
   ```


//--Atividade--//
/* O que acontece com a ordem das mensagens exibidas?
As mensagens não seguem uma ordem fixa; 
os prints da corrotina e da função normal aparecem intercalados.

Por que as mensagens se intercalam?
Porque a corrotina (go escrever) é executada em paralelo ao fluxo principal, 
permitindo que ambas as funções avancem ao mesmo tempo.
O time.Sleep ajuda a perceber melhor a alternância, 
mas não controla a ordem exata de execução.

Relação com corrotinas:
Corrotinas são rotinas leves de execução concorrente dentro do mesmo programa. 
Elas permitem que diferentes trechos do código sejam executados de forma simultânea, 
sem criar processos ou threads pesadas.
Esse comportamento é exatamente o que vemos na execução: 
o programa principal e a corrotina compartilham o tempo de CPU, alternando entre si. */



