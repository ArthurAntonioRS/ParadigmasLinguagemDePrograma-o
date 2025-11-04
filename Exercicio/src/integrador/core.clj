(ns integrador.core)

(defn CadastrarAluno []
  (println "\n== Cadastro de Alunos ==")
  (loop [alunos []]
    (print "Nome do aluno (ou ENTER para sair): ")
    (flush)
    (let [nome (read-line)]
      (if (empty? nome)
        (do
          (println "\nCadastro finalizado!\n")
          alunos)
        (do
          (print "Nota do aluno: ")
          (flush)
          (let [nota (Double/parseDouble (read-line))
                aluno {:nome nome :nota nota}]
            (recur (conj alunos aluno))
          )
        )
      )
    )
  )
)


(defn RelatorioNotas [alunos]
  (if (empty? alunos)
    (println "\nNenhum aluno cadastrado.\n")
    (do
      (println "\n== Relatorio de Notas ==")
      (let [alunos-status (map #(assoc % :status (if (>= (:nota %) 6.0) "Aprovado" "Reprovado")) alunos)
            aprovados (filter #(= "Aprovado" (:status %)) alunos-status)
            media (/ (reduce + (map :nota alunos)) (count alunos))]
        (println "\nAlunos cadastrados:")
        (doseq [a alunos-status]
          (println (str (:nome a) " - Nota: " (:nota a) " - " (:status a)))
          )
        (println "\n--- Alunos Aprovados ---")
        (doseq [a aprovados]
          (println (str (:nome a) " - Nota: " (:nota a))))
        (println (format "\nMedia geral da turma: %.2f\n" media))
      )
    )
  )
)


(defn EstatisticasGerais [alunos]
    (if (empty? alunos)
        (println "\nNenhum aluno cadastrado.\n")
        (do
            (println "\n== Estatisticas Gerais ==")
            (let [total (count alunos)
                alunos-status (map #(assoc % :status (if (>= (:nota %) 6.0) "Aprovado" "Reprovado")) alunos)
                aprovados (count (filter #(= "Aprovado" (:status %)) alunos-status))
                reprovados (count (filter #(= "Reprovado" (:status %)) alunos-status))
                notas (map :nota alunos)
                maior (apply max notas)
                menor (apply min notas)
                media (/ (reduce + notas) total)]
            (println "Total de alunos:" total)
            (println "Aprovados:" aprovados)
            (println "Reprovados:" reprovados)
            (println "Maior nota:" maior)
            (println "Menor nota:" menor)
            (println (format "Media geral: %.2f\n" media))
            )
        )
    )
)


(defn -main []
    (loop [alunos []]
        (println "== MENU PRINCIPAL ==")
        (println "1 - Cadastrar Alunos")
        (println "2 - Relatorio de Notas")
        (println "3 - Estatisticas Gerais")
        (println "0 - Sair")
        (print "Escolha uma opcao: ")
        (flush)
        (let [opcao (read-line)]
            (cond
                (= opcao "1") (recur (CadastrarAluno))
                (= opcao "2") (do (RelatorioNotas alunos) (recur alunos))
                (= opcao "3") (do (EstatisticasGerais alunos) (recur alunos))
                (= opcao "0") (println "\nEncerrando o programa. Ate logo!")
                :else (do
                    (println "\nOpcao invalida!\n")
                    (recur alunos)
                  ) 
            )
        )
    )
)