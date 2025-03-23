#include <stdio.h>

void main() {
    char name[30], add[50], item1[20], item2[20], item3[20];
    char s1[50], s2[50], s3[50], s4[50], s5[50], s6[50], s7[50], s8[50], s9[50], s13[50];
    int mobile, num1, num2, num3, qty1, qty2, qty3;
    int rate1, rate2, rate3, amount1, amount2, amount3, amounttotal;
    float sgstr, cgstr, sgst, cgst, pamount;

    printf("\t\t\t      Government of India\n");
    printf("\t\t\t        Form GST REG_06\n");
    printf("\n\n\t\t\t    Registration Certificate\n");

    printf("\nRegistration Number :09AAATC2716R8Z6\n");

    printf("\n|----|--------------------------|----------------------------------------------|");
    printf("\n| 1. | Legal Name               | ");
    scanf("%s", s1);

    printf("\n|----|--------------------------|----------------------------------------------|");
    printf("\n| 2. | Constitution of business | ");
    scanf("%s", s2);

    printf("\n|----|--------------------------|----------------------------------------------|");
    printf("\n| 3. | Trade Name, if any       | ");
    scanf("%s", s3);

    printf("\n|----|--------------------------|----------------------------------------------|");
    printf("\n| 4. | Address of principal busi| ");
    scanf("%s", s4);

    printf("\n|----|--------------------------|----------------------------------------------|");
    printf("\n| 5. | Date of Liability        | ");
    scanf("%s", s5);

    printf("\n|----|--------------------------|----------------------------------------------|");
    printf("\n| 6. | Period of Validity       | ");
    scanf("%s", s6);

    printf("\n|----|--------------------------|----------------------------------------------|");
    printf("\n| 7. | Type of Registration     | ");
    scanf("%s", s7);

    printf("\n|----|--------------------------|----------------------------------------------|");
    printf("\n| 8. | Particulars of Approving | \n|----|\tAuthority               | ");
    scanf("%s", s8);

    printf("\n|----|-------------------------------------------------------------------------|");
    printf("\n| Signature       | ");
    scanf("%s", s9);

    printf("\n|-------------------------------|----------------------------------------------|");
    printf("\n| 9. | Date of issue of cert.   | ");
    scanf("%s", s13);

    printf("\n|------------------------------------------------------------------------------|");
    printf("\n| Note: The registration is required to be prominently displayed at all       |");
    printf("\n|       places of business in the state.                                      |");
    printf("\n|------------------------------------------------------------------------------|");

    printf("\n\t\t\t     CHETAN HARDWARE STORE");
    printf("\nGST NO: 24AEPPK8561F1Z8");

    printf("\n|---------------------------------TAX-INVOICE----------------------------------|");

    printf("\n| Name: ");
    scanf("%s", name);

    printf("\n| Address: ");
    scanf("%s", add);

    printf("\n| Mobile No: ");
    scanf("%d", &mobile);

    printf("\n|------------------------------------------------------------------------------|");
    printf("\n|----NUMBER OF PRODUCT----|");
    printf("\n| 1  | 2  | 3  |");
    printf("\n---------------------------");

    printf("\n|--------ITEM NAME--------|\n");
    scanf("%s %s %s", item1, item2, item3);
    printf("\n| %s | %s | %s |", item1, item2, item3);
    printf("\n----------------------------");

    printf("\n|----QUANTITY OF ITEM-----|\n");
    scanf("%d %d %d", &qty1, &qty2, &qty3);
    printf("\n| %d  | %d  | %d  |", qty1, qty2, qty3);
    printf("\n----------------------------");

    printf("\n|------RATE OF ITEM-------|\n");
    scanf("%d %d %d", &rate1, &rate2, &rate3);
    printf("\n| %d  | %d  | %d  |", rate1, rate2, rate3);
    printf("\n----------------------------");

    amount1 = qty1 * rate1;
    amount2 = qty2 * rate2;
    amount3 = qty3 * rate3;
    amounttotal = amount1 + amount2 + amount3;

    printf("\n|--------Amount-----------|");
    printf("\n| Rs. %d  | Rs. %d  | Rs. %d  |", amount1, amount2, amount3);
    printf("\n----------------------------");

    printf("\n| Total: Rs. %d |", amounttotal);
    printf("\n----------------------------");

    printf("\n| Enter SGST Rate (%%): ");
    scanf("%f", &sgstr);

    printf("\n| Enter CGST Rate (%%): ");
    scanf("%f", &cgstr);

    sgst = (sgstr * amounttotal) / 100;
    cgst = (cgstr * amounttotal) / 100;
    pamount = sgst + cgst + amounttotal;

    printf("\n| SGST: Rs. %.2f | CGST: Rs. %.2f |", sgst, cgst);
    printf("\n----------------------------");

    printf("\n| Total Paid Amount: Rs. %.2f |", pamount);
    printf("\n----------------------------");
}
