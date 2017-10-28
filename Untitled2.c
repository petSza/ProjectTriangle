#include<stdlib.h>
#include<math.h>	
int main()
{	
	int guess = 0;
	// triangle
	char answer;
	printf("Is it a triangle or not --> test?\ny/n: ");
	scanf("%c", &answer);
	getchar();
	while (answer != 121 && answer != 110)
	{
		printf("Wrong input! Try again!\ny/n: ");
		scanf("%c", &answer);
		getchar();
		guess++;
		if (answer == 121 || answer == 110)
		{
			break;
		}
		if (guess == 1)
		{
			printf("Be careful! This is your last chance..\ny/n: ");
			scanf("%c", &answer);
			getchar();
			if (answer == 121 || answer == 110)
			{
				break;
			}
			else
			{
				printf("Bad luck!\n");
				printf("Try again after 3 hours..\n");
				break;
			}
		}
	}
	if (answer == 121)
	{
		float a, b, c;
		printf("Enter a: ");
		scanf("%f", &a);
		printf("Enter b: ");
		scanf("%f", &b);
		printf("Enter c: ");
		scanf("%f", &c);
		if ((a + b > c&&c > a - b))
		{
			printf("It's a triangle...\n");
			if (a > b && a > c)
			{
				if (pow(b, 2) + pow(c, 2) == pow(a, 2))
				{
					printf("Triangle has 90 degrees!\n");
				}
				else
				{
					printf("But doesn't have 90 degrees!\n");
				}
				printf("A is the biggest side: %.2f\n", a);
			}
			if (b > a && b > c)
			{
				if (pow(a, 2) + pow(c, 2) == pow(b, 2))
				{
					printf("Triangle has 90 degrees!\n");
				}
				else
				{
					printf("But doesn't have 90 degrees!\n");
				}
				printf("B is the biggest side: %.2f\n", b);
			}
			if (c > a && c > b)
			{
				if (pow(a, 2) + pow(b, 2) == pow(c, 2))
				{
					printf("Triangle has 90 degrees!\n");
				}
				else
				{
					printf("But doesn't have 90 degrees!\n");
				}
				printf("C is the biggest side: %.2f\n", c);
			}
			if (a == b && a == c && b == c)
			{
				printf("But doesn't have 90 degrees!\n");
				printf("Every sides are equal!\n");
			}
		}
		else
		{
			printf("It's not a triangle!\n");
		}
	}
	// zodiac finder
	printf("\nZodiac? --> y/n: ");
	scanf(" %c", &answer);
	getchar();
	if (answer == 121)
	{
		int day, month;
		printf("Enter number of a day in month: ");
		scanf("%d", &day);
		printf("Enter number of a month: ");
		scanf("%d", &month);
		if ((day >= 1 && day <= 31) && (month >= 1 && month <= 12))
		{
			if ((day >= 21 && day <= 31 && month == 1) || (day >= 1 && day <= 19 && month == 2))
			{
				printf("You are a Water Carrier\n");
				printf("Would you like something about this sign? y/n: ");
				scanf(" %c", &answer);
				getchar();
				if(answer == 121)
				{
					printf("\tThe water carrier represented by the zodiacal constellation Aquarius is Ganymede, a beautiful Phrygian youth. Ganymede was the son of Tros, king of Troy (according to Lucian, he was also the son of Dardanus). While tending to his father's flocks on Mount Ida, Ganymede was spotted by Jupiter. The king of gods became enamored of the boy and flew down to the mountain in the form of a large bird, whisking Ganymede away to the heavens. Ever since, the boy has served as cupbearer to the gods.\n");
				}
				else if(answer == 110)
				{
					printf("\tWell, if you do, then you can find out about it on/at Wikipedia later.\n");
				}
				else
				{
					printf("Sorry, you didn't enter the correct letter..\n");
				}
			}
			if ((day >= 20 && day <= 28 && month == 2) || (day >= 1 && day <= 20 && month == 3))
			{
				printf("You are a Fish\n");
				printf("Would you like something about this sign? y/n: ");
				scanf(" %c", &answer);
				getchar();
				if(answer == 121)
				{
					printf("\tPisces is classified as a short ascension sign;[63] one which takes a shorter amount of time to ascend over the horizon than the other signs.[64] It is also one of the six southern signs,[47] because it is south of the celestial equator when the sun is in it (no longer true). This results in it being seen in the winter sky in the northern hemisphere.[65] Pisces is also considered a bicorporeal or double-bodied sign,[47] as the astrological sign is composed of two fishes.\n");
				}
				else if(answer == 110)
				{
					printf("\tWell, if you do, then you can find out about it on/at Wikipedia later.\n");
				}
				else
				{
					printf("Sorry, you didn't enter the correct letter..\n");
				}
			}
			if ((day >= 21 && day <= 31 && month == 3) || (day >= 1 && day <= 20 && month == 4))
			{
				printf("You are a Ram\n");
				printf("Would you like something about this sign? y/n: ");
				scanf(" %c", &answer);
				getchar();
				if(answer == 121)
				{
					printf("\tIn western astrology, Aries is a sign of initiative; a leader, with bravery, and the autonomy required to commence. Uncomfortable with inaction, Aries is the Cardinal sign of Fire, and thus is the zodiac of drive. Ruled by Mars, Aries is strongly autonomous, and can be headstrong and crass, sometimes showing an impulsive or reckless approach to issues. With the Ram as their standard, Aries tends toward obstinate and self-seeking. Jaunty and self-supporting, Aries is capable of independence. This quality may encourage others to emulate�but Aries is unlikely to pause for supporters. When Aries is found in a chart, there is enthusiasm and decisiveness.\n");
				}
				else if(answer == 110)
				{
					printf("\tWell, if you do, then you can find out about it on/at Wikipedia later.\n");
				}
				else
				{
					printf("Sorry, you didn't enter the correct letter..\n");
				}
			}
			if ((day >= 21 && day <= 30 && month == 4) || (day >= 1 && day <= 20 && month == 5))
			{
				printf("You are a Bull\n");
				printf("Would you like something about this sign? y/n: ");
				scanf(" %c", &answer);
				getchar();
				if(answer == 121)
				{
					printf("\tTaurus was the first sign of the zodiac established among the ancient Mesopotamians � who knew it as the Bull of Heaven � because it was the constellation through which the sun rose on the vernal equinox at that time. Due to the precession of the equinox, it has since passed through the constellation Aries and into the constellation Pisces (hence our current era being known as the Age of Pisces).\n");
				}
				else if(answer == 110)
				{
					printf("\tWell, if you do, then you can find out about it on/at Wikipedia later.\n");
				}
				else
				{
					printf("Sorry, you didn't enter the correct letter..\n");
				}
			}
			if ((day >= 21 && day <= 31 && month == 5) || (day >= 1 && day <= 20 && month == 6))
			{
				printf("You are a Twins\n");
				printf("Would you like something about this sign? y/n: ");
				scanf(" %c", &answer);
				getchar();
				if(answer == 121)
				{
					printf("\tAstrologers believe Geminis have a volatile temperament, that their strength however is their versatility, and that their versatility allows them to learn a little about everything and develop skills in many areas. Geminis are considered to hold mysteriously unique artistic and creative abilities unlike other signs.\n");
				}
				else if(answer == 110)
				{
					printf("\tWell, if you do, then you can find out about it on/at Wikipedia later.\n");
				}
				else
				{
					printf("Sorry, you didn't enter the correct letter..\n");
				}
			}
			if ((day >= 21 && day <= 30 && month == 6) || (day >= 1 && day <= 22 && month == 7))
			{
				printf("You are a Crab\n");
				printf("Would you like something about this sign? y/n: ");
				scanf(" %c", &answer);
				getchar();
				if(answer == 121)
				{
					printf("\tIn astrology, Cancer is the Cardinal sign of the Water Trigon, which is made up of Cancer, Pisces, and Scorpio.[3] It is considered a negative sign, whose domicile, or ruling planet, is the Moon. Though some depictions of Cancer feature a lobster, the sign is most often represented by the crab, based on the Karkinos, a giant crab that harassed Heracles during his fight with the Hydra.\n");
				}
				else if(answer == 110)
				{
					printf("\tWell, if you do, then you can find out about it on/at Wikipedia later.\n");
				}
				else
				{
					printf("Sorry, you didn't enter the correct letter..\n");
				}
			}
			if ((day >= 23 && day <= 31 && month == 7) || (day >= 1 && day <= 22 && month == 8))
			{
				printf("You are a Lion\n");
				printf("Would you like something about this sign? y/n: ");
				scanf(" %c", &answer);
				getchar();
				if(answer == 121)
				{
					printf("\tLeo is a fixed sign along with Taurus, Scorpio, and Aquarius. Under the tropical zodiac, the Sun transits this area on average between July 23 and August 22 each year, and under the sidereal zodiac, the Sun currently transits this area from approximately August 16 to September 15.[5] The symbol of the lion is based on the Nemean lion, a lion with an impenetrable hide.[6] It is a northern sign and its opposite southern sign is Aquarius.\n");
				}
				else if(answer == 110)
				{
					printf("\tWell, if you do, then you can find out about it on/at Wikipedia later.\n");
				}
				else
				{
					printf("Sorry, you didn't enter the correct letter..\n");
				}
			}
			if ((day >= 23 && day <= 31 && month == 8) || (day >= 1 && day <= 22 && month == 9))
			{
				printf("You are a Virgin\n");
				printf("Would you like something about this sign? y/n: ");
				scanf(" %c", &answer);
				getchar();
				if(answer == 121)
				{
					printf("\tAstrologers ascribe certain personality traits to a person born under the Virgo: people born under this sign are typically analytical, kind, hardworking and practical. According to astrologers, Virgos tend to worry often; they are shy and dislike being the center of attention. They are also known for being modest, faithful, quiet, and very persuasive, as well as for having a good sense of reasoning and memory.\n");
				}
				else if(answer == 110)
				{
					printf("\tWell, if you do, then you can find out about it on/at Wikipedia later.\n");
				}
				else
				{
					printf("Sorry, you didn't enter the correct letter..\n");
				}
			}
			if ((day >= 23 && day <= 30 && month == 9) || (day >= 1 && day <= 22 && month == 10))
			{
				printf("You are a Scales\n");
				printf("Would you like something about this sign? y/n: ");
				scanf(" %c", &answer);
				getchar();
				if(answer == 121)
				{
					printf("\tLibra is one of the three zodiac air signs, the others being Gemini and Aquarius. The sign of Libra is symbolized by the gryphon, a mythological creature with the head, wings and talons of an eagle and hind legs of a lion. According to the Romans in the First Century, Libra was a constellation they idolized. The moon was said to be in Libra when Rome was founded. Everything was balanced under this righteous sign.\n");
				}
				else if(answer == 110)
				{
					printf("\tWell, if you do, then you can find out about it on/at Wikipedia later.\n");
				}
				else
				{
					printf("Sorry, you didn't enter the correct letter..\n");
				}
			}
			if ((day >= 23 && day <= 31 && month == 10) || (day >= 1 && day <= 22 && month == 11))
			{
				printf("You are a Scorpion\n");
				printf("Would you like something about this sign? y/n: ");
				scanf(" %c", &answer);
				getchar();
				if(answer == 121)
				{
					printf("\tAstrologers believe Scorpios are ruled by their desires, but that their strength is resourcefulness, and that their resourcefulness allows them to control their desires unless they have a plan to achieve them. Scorpios are analytical and meditative, and ponder data to create a realistic plan; self-deception is not something a Scorpio does. The Scorpio is secretive and intense, though their careful approach to planning and action can appear as a lack of intensity.[5] The Scorpio is good at hiding their feelings, which can cause problems in their relationships. They try to please others, and do not care what the world thinks of them.\n");
				}
				else if(answer == 110)
				{
					printf("\tWell, if you do, then you can find out about it on/at Wikipedia later.\n");
				}
				else
				{
					printf("Sorry, you didn't enter the correct letter..\n");
				}
			}
			if ((day >= 23 && day <= 30 && month == 11) || (day >= 1 && day <= 21 && month == 12))
			{
				printf("You are an Archer\n");
				printf("Would you like something about this sign? y/n: ");
				scanf(" %c", &answer);
				getchar();
				if(answer == 121)
				{
					printf("\tSagittarius, half human and half horse, is the centaur of mythology, the learned healer whose higher intelligence forms a bridge between Earth and Heaven. Also known as the Archer, Sagittarius is represented by the symbol of a bow and arrow.\n");
				}
				else if(answer == 110)
				{
					printf("\tWell, if you do, then you can find out about it on/at Wikipedia later.\n");
				}
				else
				{
					printf("Sorry, you didn't enter the correct letter..\n");
				}
			}
			if ((day >= 22 && day <= 31 && month == 12) || (day >= 1 && day <= 20 && month == 1))
			{
				printf("You are a Sea-Goat\n");
				printf("Would you like something about this sign? y/n: ");
				scanf(" %c", &answer);
				getchar();
				if(answer == 121)
				{
					printf("\tCapricorn is said to be ruled by the planet Saturn. Its symbol is based on the Sumerians' primordial god of wisdom and waters, Enki,[4] with the head and upper body of a goat and the lower body and tail of a fish.[5] Later known as Ea in Akkadian and Babylonian mythology, Enki was the god of intelligence (gest�, literally 'ear'), creation, crafts; magic; water, seawater and lakewater.\n");
				}
				else if(answer == 110)
				{
					printf("\tWell, if you do, then you can find out about it on/at Wikipedia later.\n");
				}
				else
				{
					printf("Sorry, you didn't enter the correct letter..\n");
				}
			}
		}
		else
		{
			printf("\nSad.. You should repeat kindergarten.\n");
		}
	}
	else if(answer == 110)
	{
		printf("Okay then. Maybe later. :)\n\n");
	}
	else
	{
		printf("\tYou didn't enter correct answer.\n\n");
	}
	// NUMBERS?
	printf("\nNUMBERS?? y/n: ");
	scanf("%c", &answer);
	getchar();
	if(answer == 121)
	{
		int number=9999;
		int count=0;
		int a,b,c,d=0;
		a=(number/1000)%10;
		b=(number/100)%10;
		c=(number/10)%10;
		d=number%10;
		/*
		printf("%d  ", a);
		printf("%d  ", b);
		printf("%d  ", c);
		printf("%d\n", d);
		*/
		for(number;number>1000;number--)
		{
			if(number/1000 > (number/100)%10 && (number/100)%10 > (number/10)%10 && (number/10)%10 > number%10)
			{
				count++;
				printf("%d\n", number);
			}
		}
		printf("\t\tThere are %d those numbers!\n", count);
	}
	else if(answer == 110)
	{
		printf("You chose NO..\n");
	}
	else
	{
		printf("You didn't enter the correct letter!");
	}
	// shopping
	printf("\nShopping? y/n: ");
	scanf("%c", &answer);
	getchar();
	if(answer == 121)
	{
		int sumPlatit;
		int platba;
		printf("To pay: ");
		scanf("%d", &sumPlatit);
		printf("Cash: ");
		scanf("%d", &platba);
		if(platba<sumPlatit)
		{
			printf("Not enough money!");
		}
		if(platba>=sumPlatit)
		{
			int vydavok;
			vydavok=platba-sumPlatit;
			if(vydavok == 0)
			{
				printf("No money back..\n");
			}
			else
			{
			int fiveH,oneH,twenty,ten,five,two,one;
			fiveH=vydavok/500;
			vydavok=vydavok-(fiveH*500);
			oneH=vydavok/100;
			vydavok=vydavok-(oneH*100);
			twenty=vydavok/20;
			vydavok=vydavok-(twenty*20);
			ten=vydavok/10;
			vydavok=vydavok-(ten*10);
			five=vydavok/5;
			vydavok=vydavok-(five*5);
			two=vydavok/2;
			vydavok=vydavok-(two*2);
			one=vydavok/1;
			vydavok=vydavok-(one*1);
			printf("500 - %d\n100 - %d\n 20 - %d\n 10 - %d\n  5 - %d\n  2 - %d\n  1 - %d\n", fiveH, oneH, twenty, ten, five, two, one);
			}
		}
	}
	system("pause");
	return 0;
}


/*
* Calculate the third power of a number
* Author: Peter Szathm�ry
* Date: 28-10-2017
* @param: number
* @return: result
*/
float caclThirdPower(float number)
{
	float result;
	result = pow(number, 3);
	return result;
}
