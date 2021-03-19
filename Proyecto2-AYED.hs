--EJERCICIO 1--
data Carrera = Matematica | Fisica | Computacion | Astronomia

titulo :: Carrera -> String
titulo Matematica = "Licenciatura en Matematica"
titulo Computacion = "Licenciatura en Ciencias de la Computacion"
titulo Astronomia = "Licenciatura en Astronomia"
titulo Fisica = "Licenciatura en Fisica"

--EJERCICIO 2--
data Carrera = Matematica | Fisica | Computacion | Astronomia deriving (Show, Eq, Ord, Bounded, Enum)

--Ejercicio 3--
--a)--
type Ingreso = Int

data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar
data Area = Administrativa | Ensenanza | Economica | Postgrado

data Persona = Decane
         |Docente Cargo 
        |NoDocente Area
        |Estudiante Carrera Ingreso

--b) El tipo del constructor Docente es Docente :: Cargo -> Persona--

--c)--
es_doc :: Cargo -> Persona -> Bool
es_doc Titular (Docente Titular) = True
es_doc Asociado (Docente Asociado) = True
es_doc Adjunto (Docente Adjunto) = True
es_doc Asistente (Docente Asistente) = True
es_doc Auxiliar (Docente Auxiliar) = True
es_doc _ _ = False

cuantos_doc :: [Persona] -> Cargo -> Int
cuantos_doc xs c =  length (filter (es_doc c) xs)

--EJERCICIO 4--
primerElemento :: [a] -> Maybe a
primerElemento [] = Nothing
primerElemento xs = Just (head xs)

--EJERCICIO 5--

--a) 1)--
data Carrera = Matematica | Fisica | Computacion | Astronomia deriving (Show, Eq, Ord, Bounded, Enum)


type Ingreso = Int

data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar deriving (Eq, Show)
data Area = Administrativa | Ensenanza | Economica | Postgrado deriving (Show, Eq)

data Persona = Decane
         |Docente Cargo 
        |NoDocente Area
        |Estudiante Carrera Ingreso
        deriving (Show, Eq)


data Cola = VaciaC | Encolada Persona Cola  deriving Show

atender' :: Cola -> Cola
atender' (Encolada p VaciaC) = VaciaC
atender' (Encolada p c) = Encolada p (atender' c)


atender :: Cola -> Maybe Cola
atender VaciaC = Nothing
atender c = Just (atender' c)

--a) 2)--

encolar :: Persona -> Cola -> Cola
encolar = Encolada

--a) 3)--

busca :: Cola -> Cargo -> Maybe Persona
busca VaciaC _ = Nothing
busca (Encolada persona cola) cargo | (es_doc cargo persona) = Just persona
                                    | otherwise = busca cola cargo

--b) Cola se parece al tipo Lista []--

--EJERCICIO 6--

data ListaAsoc a b = Vacia | Nodo a b ( ListaAsoc a b ) deriving Show

--a)--

type GuiaTelefonica = ListaAsoc String Int

--b) 1)--
la_long :: ListaAsoc a b -> Int
la_long Vacia = 0
la_long (Nodo a b (xs)) = 1 +  (la_long xs)

--b) 2)--
la_concat :: ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b
la_concat Vacia ys = ys
la_concat (Nodo a b xs) ys = Nodo a b (la_concat xs ys)

--b) 3)--
la_pares :: ListaAsoc a b -> [(a, b)]
la_pares Vacia = []
la_pares (Nodo x y xs) = (x,y) : la_pares xs

--b) 4)--
la_busca :: Eq a => ListaAsoc a b -> a -> Maybe b
la_busca Vacia _  = Nothing
la_busca (Nodo a b xs) c | (a == c) = Just b
                         | otherwise = la_busca xs c

--b) 5)--
la_borrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b
la_borrar _ Vacia = Vacia
la_borrar t (Nodo a b xs) | (t==a) = la_borrar t xs
                          | otherwise = Nodo a b (la_borrar t xs)                      