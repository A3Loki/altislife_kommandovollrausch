life_fadeSound = !life_fadeSound;

if (life_fadeSound) then
{
1 fadeSound 0.1; // Faded to 10%
titleText ["Ohrschützer angezogen - Du hörst nun gedämpfter!", "PLAIN"];
}
else
{
1 fadeSound 1; // Returned to 100%
titleText ["Ohrschützer ausgezogen - Du hörst nun wieder normal!", "PLAIN"];
};