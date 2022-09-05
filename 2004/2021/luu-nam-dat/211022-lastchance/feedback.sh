
printf "\n//// Feedback on Test $1 ////\n\n"

if [ $2 = "1" ]
then
	printf "Test Data:\n"
	cat "TestData/$1.in"
else
	printf "Test Data is hidden: Too much data\n"
fi

"Feedback/ans.exe" < "TestData/$1.in"

printf "\nGot:\n"

g++ -o "work.exe" "work.cpp"

"work.exe" <  "TestData/$1.in"
