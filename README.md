# Random_projects
Your goal here is to write classes for creating a bouquet of flowers. To create the bouquet of flower you will need to write following two classes.
Design a class Flower. A “Flower” is characterized by the following attributes:
● a name
● a color
● a basic price per unit
● an indication whether the flower is perfumed or not
● and an indication to know whether the flower is on sale.

The class has the following behaviors:
● a constructor initializing the attributes using parameters given in the order shown by the provided main(); a default constructor will not be necessary but the last two parameters will have false as default value
● a price() method returning the flower’s price: the price will be the base price if the flower is not on sale; otherwise, the price will be half the base price
● a bool perfume() method indicating whether the flower is perfumed or not
● operator string() constto return value of the Flower as a string as:
<Name><Color><Perfumed>, Price: <Price> Rs.
● Overloaded stream insertion operator. The characteristics have to be displayed in strict accordance with the following format:
<Name><Color><Perfumed>, Price: <Price> Rs.
● an overloading of the == operator returning true if two flowers are identical, false otherwise. Two flowers are considered identical if they have the same name, color, and the two flowers are both either perfumed or not (neither the price nor the fact that the flower is on sale or not is involved in the comparison).

Next, write a “Bouquet” class which will be modeled using a dynamic array of Flowers.
The Bouquet class offers the following methods:
● a method bool perfume() returning true if the bouquet is perfumed and false otherwise; a bouquet is perfumed if at least one of its flowers is perfumed;
● a method price() without parameters returning the price of the bouquet of flowers; This is the sum of the prices of all its flowers; this sum is multiplied by two if the bouquet is perfumed;
● operator string() constto return value of the Bouquet as a string as:
If the bouquet does not contain any flower,
Still no flower in the bouquet
Else:
<Flower1>
..
<FlowerN>
Total Price: <Price_of_bouquet> Rs.
● a stream insertion method, should display all information of bouquet with the total price. This method will display the characteristics of the bouquet of flowers respecting rigorously the following format:
If the bouquet does not contain any flower,
Still no flower in the bouquet
Else:
Perfumed Bouquet composed of:
<Flower1>
..
<FlowerN>
Total Price: <Price_of_bouquet> Rs.
Here < FlowerX > means display of the Xthflower of the bouquet in the format specified by the overload of the << operator. There is a newline after displaying each flower and after displaying the price of the bouquet.
● an overload of the += operator which allows adding a flower to the bouquet, the flower will always be added at the end.
● an overload of the -= operator taking as a parameter a flower and removing from the bouquet all the flowers identical to the latter (according to the definition of the == operator);
● an overloaded + operator according its usage in the provided main
● an overloaded - operator according to its usage in the provided main
