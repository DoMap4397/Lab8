#include <stdio.h>

int  main(){
    int password, otp, selection, account_balance, withdraw, withdraw_fee, transfer_fee, check=0, count=0;
    char bank_name[30],account_number[30];
    password=1234;
    otp=5678;
    account_balance=500;
    withdraw_fee=5;
    transfer_fee=10;
    printf("\n Welcome to the bank Đô Mập\n");
    while (count<3) {
        printf("\n Mời Bạn Nhập Mật Khẩu thẻ: ");
        scanf("%d", &password);
        printf("\n Mời Bạn Nhập Mật Khẩu otp: ");
        scanf("%d", &otp);
        if(password==1234 && otp==5678){
            check = 1;
            break;
        }
        else count++;
    }
    if(check==1){
        printf("\n Tên chủ thẻ: Nguyễn Đức Tâm\n Số tài khoản: 1234567890\n");
        printf("\n 1. Kiểm tra số dư tài khoản.\n 2. Rút tiền.\n 3. Chuyển khoản.\n 4. Kết thúc giao dịch.\nNhập lựa chọn của bạn:   ");
        scanf("%d", &selection);
        switch (selection) {
            case 1:
                printf("Số dư tài khoản của bạn là:%d\n", account_balance);
                break;
            case 2:
                printf("Nhập số tiền muốn rút:");
                scanf("%d",&withdraw);
                if(withdraw%50==0 && withdraw<=1000){
                    char bien;
                    printf("\nGiao dịch này có mất phí, bạn có muốn tiếp tục không (y or n)\n");
                    scanf("%c", &bien); // xoá dấu enter thừa
                    scanf("%c", &bien);
                    if(bien =='y' || bien == 'Y'){
                        account_balance=account_balance-withdraw-withdraw_fee;
                        printf("Số dư còn lại: %d", account_balance);
                    }
                    else if(bien == 'n' || bien == 'N'){
                        printf("\nKết thúc giao dịch/n");
                        break;
                    }
                }
            case 3:
                printf("Nhập tên ngân hàng: ");
                scanf("%s", bank_name);
                printf("Nhập số tài khoản: ");
                scanf("%s", account_number);
                printf("Nhập số tiền muốn chuyển khoản:");
                scanf("%d",&withdraw);
                if(withdraw%50==0 && withdraw<=1000){
                    char bien;
                    fflush(stdin);
                    printf("\nGiao dịch này có mất phí, bạn có muốn tiếp tục không (y or n)\n");
                    scanf("%c", &bien);
                   
                    if(bien =='y' || bien == 'Y'){
                        account_balance=account_balance-withdraw-transfer_fee;
                        printf("Số dư còn lại: %d", account_balance);
                }
                else if(bien == 'n' || bien == 'N'){
                    printf("\nKết thúc giao dịch/n");
                    break;
                }
            case 4:
                    printf("\nKết thúc giao dịch\n");
            default:
                break;
            }
        }
    }
    
}
