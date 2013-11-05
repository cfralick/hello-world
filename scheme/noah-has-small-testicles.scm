; tail call

(define (noah-has-small-testicles size)
  (if (= size 0) 
    0 
    (begin 
      (display size)(newline)
      (noah-has-small-testicles (- size 1))
    )
  )
)
