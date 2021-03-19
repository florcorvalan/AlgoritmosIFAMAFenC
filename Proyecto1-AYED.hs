--Ejercicio 1a --
esCero :: Int -> Bool
esCero x = x==0

--Ejercicio 1b --
esPositivo :: Int -> Bool
esPositivo x = (x > 0)

--Ejercicio 1c --
esVocal :: Char -> Bool
esVocal x = x=='a'|| x=='e'||x=='i'||x=='o'||x=='u'

--Ejercicio 2a--
paratodo :: [Bool] -> Bool
paratodo [] = True
paratodo (x:xs) = x && paratodo xs

--Ejercicio 2b --
sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + (sumatoria xs)

--Ejercicio 2c--
productoria :: [Int] -> Int
productoria [] = 1
productoria (x:xs) = x * (productoria xs)

--Ejercicio 2d--
factorial :: Int -> Int
factorial 0 = 1
factorial n = n*(factorial (n-1))

--Ejercicio 2e--
promedio :: [Int] -> Int
promedio [] = 0
promedio (x:xs) = div (sumatoria (x:xs)) (length (x:xs))

--Ejercicio 3--
pertenece :: Int -> [Int] -> Bool
pertenece i [] = False
pertenece i (x:xs) = elem i (x:xs)

--Ejercicio 4a--
paratodo1 :: [a] -> (a -> Bool) -> Bool
paratodo1 [] t = True
paratodo1 (x:xs) t = t x && paratodo1 xs t

--Ejercicio 4b--
existe :: [a] -> (a -> Bool) -> Bool
existe [] t = False
existe (x:xs) t = t x || existe xs t

--Ejercicio 4c--
sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' (x:xs) t = sumatoria(map t (x:xs))

--Ejercicio 4d--
productoria1 :: [a] -> (a -> Int) -> Int
productoria1 (x:xs) t = productoria(map t (x:xs))

--Ejercicio 5--
paratodo2 (x:xs) = paratodo1((x:xs) id)

--Ejercicio 6a--
todosPares :: [Int] -> Bool 
todosPares xs = paratodo1 xs (\x->mod x 2 == 0)

--Ejercicio 6b--
hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo m xs = existe xs (\x -> mod x m == 0)

--Ejercicio 6c--
cuadrado:: Int->Int
cuadrado x = x*x

sumaCuadrados :: Int -> Int
sumaCuadrados n = sumatoria' [0..n] cuadrado

--Ejercicio 6d--
auxiliar :: Int -> Int
auxiliar x | x==0 = 1
           | x/=0 = id x 

factorial :: Int -> Int
factorial n = productoria1 [0..n] auxiliar

--Ejercicio 6e--
pares :: Int-> Int
pares x | (mod x 2 == 0) = x
        | (mod x 2 /= 0) = x-(x-1)

multiplicaPares :: [Int] -> Int
multiplicaPares (x:xs) = productoria1 (x:xs) pares --even--

--Ejercicio 7
--b- La funcion map succ suma 1 a cada elemento de la lista y devuelve una lista con los resultados.
--c- La funcion filter esPositivo [1, -4, 6, 2, -8] verifica si cada elemento de lalista es positivo y
--devuelve una lista con los resultados booleanos.

--Ejercicio 8a--
duplica :: [Int] -> [Int]
duplica [] = []
duplica (x:xs) = (x*2): duplica xs

--Ejercicio 8b--
duplica :: [Int] -> [Int]
duplica xs = map (\x -> x*2) xs

--Ejercicio 9a--
soloPares :: [Int]->[Int]
soloPares [] = []
soloPares (x:xs) |(mod x 2==0) = x : soloPares xs
                 |(mod x 2 /= 0) = soloPares xs

--Ejercicio 9b--
soloPares :: [Int]->[Int]
soloPares xs = filter even xs

--Ejercicio 9c--
multiplicaPares :: [Int] -> Int
multiplicaPares (x:xs) = productoria (filter even (x:xs) )

--Ejercicio 10a--
primIgualesA :: Eq a => a -> [a] -> [a]
primIgualesA n [] = []
primIgualesA n (x:xs) | n==x = x:(primIgualesA n xs)
                      |otherwise = []

--Ejercicio 10b--
primIgualesAy :: Ord a => a -> [a] -> [a]
primIgualesAy y xs = (takeWhile (==y) xs)

--Ejercicio 11a--
primIguales :: Eq a => [a]->[a]
primIguales [] = []
primIguales [x] = [x]
primIguales (x:xs) |head xs==x = x:(primIguales xs)
                   |otherwise = x:[]
--Ejercicio 11b--
primIguales' :: (Eq a) => [a] -> [a]
primIguales' [] = []
primIguales' xs = primIgualesA (head xs) xs
