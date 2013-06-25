;;; Expose Henry for what he is
;;; Signature (ohsogay int int)

(defun ohsogay(howmany thatsright)
    (loop for i from 1 to (* thatsright (* howmany howmany)) do 
        (format t "~D ~S ~% ~D ~S~%" i `(dicks in henrys mouth) i `(at once?) 
        (loop for i from (* 2 2) to (* i i) do 
            (format t "Nah probably ~D times that! ~& What? That FAG ~2%" (* i i))))))
