(ns atividade.integrador)

(def notaAprovacao 60) 

(defn classificacaoNota [nota]
  "Classifica a nota (0-100) e retorna o conceito (A, B, C, D, F)."
  (cond
    (>= nota 90) "A"
    (>= nota 80) "B"
    (>= nota 70) "C"
    (>= nota notaAprovacao) "D"
    :else "F"))

(defn -main []
  (println "Quantos alunos na turma?")
  (let [totalAlunos (Integer/parseInt (read-line))]

    (let [resultadoFinal
          (loop [alunoAtual 1          
                 somaNotas 0           
                 totalAprovados 0]     

            (if (<= alunoAtual totalAlunos)
              (do   
                (println (str "\nNome do aluno " alunoAtual ":"))
                (let [nome (read-line)
                      nota-prompt (str "Nota (0-100) do(a) " nome ":")
                      _ (println nota-prompt) 
                      nota (Integer/parseInt (read-line))
                      conceito (classificacaoNota nota)
                      aprovado? (>= nota notaAprovacao)]

                  (println (str nome " - Conceito: " conceito))

                  (recur (inc alunoAtual) 
                         (+ somaNotas nota) 
                         (if aprovado? (inc totalAprovados) totalAprovados)))) 

              {:soma somaNotas :aprovados totalAprovados}))]

      (let [somaFinal (:soma resultadoFinal)
            aprovadosFinal (:aprovados resultadoFinal)
            media (if (pos? totalAlunos)
                    (/ (double somaFinal) totalAlunos)
                    0.0)
            mediaFormatada (format "%.1f" media)] 

        (println "\n" (apply str (repeat 20 "-")))
        (println "Média da turma:" mediaFormatada)
        (println "Aprovados:" aprovadosFinal)

        (print "Desempenho geral: ")
        (println (if (>= media 80)
                   "Turma excelente!"
                   (if (>= media 60)
                     "Bom desempenho!"
                     "É necessário melhorar!")))
        (println (apply str (repeat 20 "-")))))))