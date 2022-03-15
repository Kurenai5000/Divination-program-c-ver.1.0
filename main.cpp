#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int getAnswerOne(int answerNumber){
    if (answerNumber == 1){
      cout << "Yang - Firey, Positive, yes, Upward" << endl;
      }
    if (answerNumber == 2){
      cout << "Yin - Negative, Cold, No, Downward" << endl;
      }
    }

int getAnswerTwo(int answerNumber){
    if (answerNumber == 1){
      cout << "Earth - Money, Stability, Restriction, Reality" << endl;
      }
    if (answerNumber == 2){
      cout << "Water - Emotion, Psychic, Dreams, Healing" << endl;
      }
     if (answerNumber == 3){
      cout << "Air - Thoughts, Speed, Changes, Travel" << endl;
      }
    if (answerNumber == 4){
      cout << "Fire - Anger, Passion, Motivation, Desire, Force" << endl;
      }
    }

int getAnswerThree(int answerNumber){
    if (answerNumber == 1){
      cout << "Saturn - Restriction, Society, Hierarchy, Time, Cycles" << endl;
      }
    if (answerNumber == 2){
      cout << "Jupiter - Luck, Expansion, Fertility, Success, Good times" << endl;
      }
    if (answerNumber == 3){
      cout << "Mars - Drive, War, Construction, Conflict, Action" << endl;
      }
    if (answerNumber == 4){
      cout << "Sol - Social, Community, Fame, Wealth, Life force, Consciousness" << endl;
      }
    if (answerNumber == 5){
      cout << "Venus - Love, Lust, Art, Beauty, Creativity, Self expression" << endl;
      }
    if (answerNumber == 6){
      cout << "Mercury - Intelligence, Language, Science, Communication, Thought" << endl;
      }
    if (answerNumber == 7){
      cout << "Luna - Dreams, Rest, Swelling, Imagination, Internal, Subconscious" << endl;
      }
    }

int getAnswerFour(int answerNumber){
    if (answerNumber == 1){
      cout << "Aries - Beginning, Being alone, Spirituality, Action" << endl;
      }
    if (answerNumber == 2){
      cout << "Taurus - Growth, Stability, Building" << endl;
      }
    if (answerNumber == 3){
      cout << "Gemini - Knowledge, Communication, Writing" << endl;
      }
    if (answerNumber == 4){
      cout << "Cancer - Home, Saving money, Holding on to emotions" << endl;
      }
    if (answerNumber == 5){
      cout << "Leo - Leading, Socialising, Expression" << endl;
      }
    if (answerNumber == 6){
      cout << "Virgo - Analysation, Perfection, Cleaning" << endl;
      }
    if (answerNumber == 7){
      cout << "Libra - Beauty, Playing, Humanitarianism, Harmony" << endl;
      }
    if (answerNumber == 8){
      cout << "Scorpio - Secrets, Black magic, Dark emotions or thoughts, Evil" << endl;
      }
    if (answerNumber == 9){
      cout << "Sagittarius - Travel, Religion, Philosophy, Teachings" << endl;
      }
    if (answerNumber == 10){
      cout << "Capricorn - Society, Structure, Debt, Hard Lessons" << endl;
      }
    if (answerNumber == 11){
      cout << "Aquarius - Internet, Groups, Wierd phenomena, Future" << endl;
      }
    if (answerNumber == 12){
      cout << "Pisces - Mirror, Inner world, Feelings, Psychic phenomena" << endl;
      }
    }

int getAnswerFive(int answerNumber){
    if (answerNumber == 1){
      cout << "Andromeda - Being saved, Vulnerability, Help, Tricky situations" << endl;
      }
    if (answerNumber == 2){
      cout << "Aquila - Traveling with others, Rides, Lifts, Chauffeuring" << endl;
      }
    if (answerNumber == 3){
      cout << "Auriga - Travel, Movement, Momentum" << endl;
      }
    if (answerNumber == 4){
      cout << "Bootes - Self sufficiency, Survival, Clever creations" << endl;
      }
    if (answerNumber == 5){
      cout << "Cassiopeia - Vanity, Boastfulness, Endangering yourself" << endl;
      }
    if (answerNumber == 6){
      cout << "Cepheus - Sacrifice, Consulting oracles, At mercy of others" << endl;
      }
    if (answerNumber == 7){
      cout << "Corona Borealis - Light in the tunnel, Overcoming, Finding an out, Exits" << endl;
      }
    if (answerNumber == 8){
      cout << "Cygnus - Separation, Being blocked, Distance'" << endl;
      }
    if (answerNumber == 9){
      cout << "Delphinus - Taking risks, Following guidance, Leap of faith" << endl;
      }
    if (answerNumber == 10){
      cout << "Draco - Covering your bases, Protection, Guarding" << endl;
      }
    if (answerNumber == 11){
      cout << "Hercules - Exhaustion, Overwork, Strain, Long days" << endl;
      }
    if (answerNumber == 12){
      cout << "Lyra - Charm, Persuasion, Temptation, Performance" << endl;
      }
    if (answerNumber == 13){
      cout << "Ophiuchus - Resurrection, The past, Bringing back, Old days" << endl;
      }
    if (answerNumber == 14){
      cout << "Pegasus - The root of creation, Inspiration, Blessings" << endl;
      }
    if (answerNumber == 15){
      cout << "Perseus - Overcoming challenges, Defeating troubles" << endl;
      }
    if (answerNumber == 16){
      cout << "Sagitta - Firing, Propelling forward, Hitting targets, Speed" << endl;
      }
    if (answerNumber == 17){
      cout << "Serpens - Two extremes, Sides, Dual nature" << endl;
      }
    if (answerNumber == 18){
      cout << "Triangulum - Floating, Rotation, Changing angles" << endl;
      }
    if (answerNumber == 19){
      cout << "Ursa Major - Caring for others, Resting, Healing yourself" << endl;
      }
    if (answerNumber == 20){
      cout << "Ursa Minor - Breaking taboo, Burning bridges, Removing shackles" << endl;
      }
    if (answerNumber == 21){
      cout << "Piscis Australis - Fertility, Being rescued" << endl;
      }
    if (answerNumber == 22){
      cout << "Cetus - Loosing your prey, Failed winnings" << endl;
      }
    if (answerNumber == 23){
      cout << "Orion - Chasing after, Forcing yourself onto something, Failure due to foolishness" << endl;
      }
    if (answerNumber == 24){
      cout << "Eridanus - Struck down, Falling, Being humbled" << endl;
      }
    if (answerNumber == 25){
      cout << "Lepus - Being hunted, Escape" << endl;
      }
    if (answerNumber == 26){
      cout << "Canis Minor - Unlucky, poisoned" << endl;
      }
    if (answerNumber == 27){
      cout << "Canis Major - Being the quickest, Best in the world" << endl;
      }
    if (answerNumber == 28){
      cout << "Hydrus - Shadows, Hidden danger, Invisibility" << endl;
      }
    if (answerNumber == 29){
      cout << "Crater - Laziness, Unfulfilled duties" << endl;
      }
    if (answerNumber == 30){
      cout << "Corvus - Watching, Unable to act" << endl;
      }
    if (answerNumber == 31){
      cout << "Argo - Navigation, Voyages, Watch out for dangers along the way" << endl;
      }
    if (answerNumber == 32){
      cout << "Centaurus - Healing, Wounds, Teaching" << endl;
      }
    if (answerNumber == 33){
      cout << "Lupus - Insanity, Excess of power" << endl;
      }
    if (answerNumber == 34){
      cout << "Ara - Vows, Planning victory, Changing of the tide" << endl;
      }
    if (answerNumber == 35){
      cout << "Corona Australis - The peak, Freedom from slavery" << endl;
      }
    }

int getAnswerSix(int answerNumber){
    if (answerNumber == 1){
      cout << "Yang - Firey, Positive, yes, Upward" << endl;
      }
    if (answerNumber == 2){
      cout << "Yin - Negative, Cold, No, Downward" << endl;
      }
    if (answerNumber == 3){
      cout << "Earth - Money, Stability, Restriction, Reality" << endl;
      }
    if (answerNumber == 4){
      cout << "Water - Emotion, Psychic, Dreams, Healing" << endl;
      }
     if (answerNumber == 5){
      cout << "Air - Thoughts, Speed, Changes, Travel" << endl;
      }
    if (answerNumber == 6){
      cout << "Fire - Anger, Passion, Motivation, Desire, Force" << endl;
      }
    if (answerNumber == 7){
      cout << "Saturn - Restriction, Society, Hierarchy, Time, Cycles" << endl;
      }
    if (answerNumber == 8){
      cout << "Jupiter - Luck, Expansion, Fertility, Success, Good times" << endl;
      }
    if (answerNumber == 9){
      cout << "Mars - Drive, War, Construction, Conflict, Action" << endl;
      }
    if (answerNumber == 10){
      cout << "Sol - Social, Community, Fame, Wealth, Life force, Consciousness" << endl;
      }
    if (answerNumber == 11){
      cout << "Venus - Love, Lust, Art, Beauty, Creativity, Self expression" << endl;
      }
    if (answerNumber == 12){
      cout << "Mercury - Intelligence, Language, Science, Communication, Thought" << endl;
      }
    if (answerNumber == 13){
      cout << "Luna - Dreams, Rest, Swelling, Imagination, Internal, Subconscious" << endl;
      }
    if (answerNumber == 14){
      cout << "Aries - Beginning, Being alone, Spirituality, Action" << endl;
      }
    if (answerNumber == 15){
      cout << "Taurus - Growth, Stability, Building" << endl;
      }
    if (answerNumber == 16){
      cout << "Gemini - Knowledge, Communication, Writing" << endl;
      }
    if (answerNumber == 17){
      cout << "Cancer - Home, Saving money, Holding on to emotions" << endl;
      }
    if (answerNumber == 18){
      cout << "Leo - Leading, Socialising, Expression" << endl;
      }
    if (answerNumber == 19){
      cout << "Virgo - Analysation, Perfection, Cleaning" << endl;
      }
    if (answerNumber == 20){
      cout << "Libra - Beauty, Playing, Humanitarianism, Harmony" << endl;
      }
    if (answerNumber == 21){
      cout << "Scorpio - Secrets, Black magic, Dark emotions or thoughts, Evil" << endl;
      }
    if (answerNumber == 22){
      cout << "Sagittarius - Travel, Religion, Philosophy, Teachings" << endl;
      }
    if (answerNumber == 23){
      cout << "Capricorn - Society, Structure, Debt, Hard Lessons" << endl;
      }
    if (answerNumber == 24){
      cout << "Aquarius - Internet, Groups, Wierd phenomena, Future" << endl;
      }
    if (answerNumber == 25){
      cout << "Pisces - Mirror, Inner world, Feelings, Psychic phenomena" << endl;
      }
    if (answerNumber == 26){
      cout << "Andromeda - Being saved, Vulnerability, Help, Tricky situations" << endl;
      }
    if (answerNumber == 27){
      cout << "Aquila - Traveling with others, Rides, Lifts, Chauffeuring" << endl;
      }
    if (answerNumber == 28){
      cout << "Auriga - Travel, Movement, Momentum" << endl;
      }
    if (answerNumber == 29){
      cout << "Bootes - Self sufficiency, Survival, Clever creations" << endl;
      }
    if (answerNumber == 30){
      cout << "Cassiopeia - Vanity, Boastfulness, Endangering yourself" << endl;
      }
    if (answerNumber == 31){
      cout << "Cepheus - Sacrifice, Consulting oracles, At mercy of others" << endl;
      }
    if (answerNumber == 32){
      cout << "Corona Borealis - Light in the tunnel, Overcoming, Finding an out, Exits" << endl;
      }
    if (answerNumber == 33){
      cout << "Cygnus - Separation, Being blocked, Distance'" << endl;
      }
    if (answerNumber == 34){
      cout << "Delphinus - Taking risks, Following guidance, Leap of faith" << endl;
      }
    if (answerNumber == 35){
      cout << "Draco - Covering your bases, Protection, Guarding" << endl;
      }
    if (answerNumber == 36){
      cout << "Hercules - Exhaustion, Overwork, Strain, Long days" << endl;
      }
    if (answerNumber == 37){
      cout << "Lyra - Charm, Persuasion, Temptation, Performance" << endl;
      }
    if (answerNumber == 38){
      cout << "Ophiuchus - Resurrection, The past, Bringing back, Old days" << endl;
      }
    if (answerNumber == 39){
      cout << "Pegasus - The root of creation, Inspiration, Blessings" << endl;
      }
    if (answerNumber == 40){
      cout << "Perseus - Overcoming challenges, Defeating troubles" << endl;
      }
    if (answerNumber == 41){
      cout << "Sagitta - Firing, Propelling forward, Hitting targets, Speed" << endl;
      }
    if (answerNumber == 42){
      cout << "Serpens - Two extremes, Sides, Dual nature" << endl;
      }
    if (answerNumber == 43){
      cout << "Triangulum - Floating, Rotation, Changing angles" << endl;
      }
    if (answerNumber == 44){
      cout << "Ursa Major - Caring for others, Resting, Healing yourself" << endl;
      }
    if (answerNumber == 45){
      cout << "Ursa Minor - Breaking taboo, Burning bridges, Removing shackles" << endl;
      }
    if (answerNumber == 46){
      cout << "Piscis Australis - Fertility, Being rescued" << endl;
      }
    if (answerNumber == 47){
      cout << "Cetus - Loosing your prey, Failed winnings" << endl;
      }
    if (answerNumber == 48){
      cout << "Orion - Chasing after, Forcing yourself onto something, Failure due to foolishness" << endl;
      }
    if (answerNumber == 49){
      cout << "Eridanus - Struck down, Falling, Being humbled" << endl;
      }
    if (answerNumber == 50){
      cout << "Lepus - Being hunted, Escape" << endl;
      }
    if (answerNumber == 51){
      cout << "Canis Minor - Unlucky, poisoned" << endl;
      }
    if (answerNumber == 52){
      cout << "Canis Major - Being the quickest, Best in the world" << endl;
      }
    if (answerNumber == 53){
      cout << "Hydrus - Shadows, Hidden danger, Invisibility" << endl;
      }
    if (answerNumber == 54){
      cout << "Crater - Laziness, Unfulfilled duties" << endl;
      }
    if (answerNumber == 55){
      cout << "Corvus - Watching, Unable to act" << endl;
      }
    if (answerNumber == 56){
      cout << "Argo - Navigation, Voyages, Watch out for dangers along the way" << endl;
      }
    if (answerNumber == 57){
      cout << "Centaurus - Healing, Wounds, Teaching" << endl;
      }
    if (answerNumber == 58){
      cout << "Lupus - Insanity, Excess of power" << endl;
      }
    if (answerNumber == 59){
      cout << "Ara - Vows, Planning victory, Changing of the tide" << endl;
      }
    if (answerNumber == 60){
      cout << "Corona Australis - The peak, Freedom from slavery" << endl;
      }
    if (answerNumber == 61){
      cout << "The One - Completion, Beginnings, All things, The world" << endl;
      }
    }




int main() {

int input;


cout << "Enter a number for the divination system you desire and then press enter." << endl;
cout << "1.Yin/Yang, 2.Four elements, 3.Seven Planets, 4.12 Zodiac, 5.Stars, 6.Complete system(Recommended)" << endl;

cin >> input;

if (input == 1) {
  cout << "You've chosen yin yang." << endl;
  cout << "Press enter to divine." << endl;

  while (true){
  if ((GetAsyncKeyState(VK_RETURN))) {

    srand(time(0));

    cout << getAnswerOne(1 +(rand() % 2)) << endl;
    Sleep(1000);
                                     }
               }
                }

if (input == 2) {
  cout << "You've chosen the four elements." << endl;
  cout << "Press enter to divine." << endl;

  while (true){
  if ((GetAsyncKeyState(VK_RETURN))) {

    srand(time(0));

    cout << getAnswerTwo(1 +(rand() % 4)) << endl;
    Sleep(1000);
                                     }
               }
                }

if (input == 3) {
  cout << "You've chosen the seven planets." << endl;
  cout << "Press enter to divine." << endl;

  while (true){
  if ((GetAsyncKeyState(VK_RETURN))) {

    srand(time(0));

    cout << getAnswerThree(1 +(rand() % 7)) << endl;
    Sleep(1000);
                                     }
               }
                }

if (input == 4) {
  cout << "You've chosen the 12 zodiac." << endl;
  cout << "Press enter to divine." << endl;

  while (true){
  if ((GetAsyncKeyState(VK_RETURN))) {

    srand(time(0));

    cout << getAnswerFour(1 +(rand() % 12)) << endl;
    Sleep(1000);
                                     }
               }
                }

if (input == 5) {
  cout << "You've chosen the stars." << endl;
  cout << "Press enter to divine." << endl;

  while (true){
  if ((GetAsyncKeyState(VK_RETURN))) {

    srand(time(0));

    cout << getAnswerFive(1 +(rand() % 35)) << endl;
    Sleep(1000);
                                     }
               }
                }

if (input == 6) {
  cout << "You've chosen all." << endl;
  cout << "Press enter to divine." << endl;

  while (true){
  if ((GetAsyncKeyState(VK_RETURN))) {

    srand(time(0));

    cout << getAnswerSix(1 +(rand() % 61)) << endl;
    Sleep(1000);
                                     }
               }
                }


return 0;
}

