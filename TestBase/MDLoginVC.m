//
//  MDLoginVC.m
//  Naturapass
//
//  Created by Manh on 7/23/15.
//  Copyright (c) 2015 Appsolute. All rights reserved.
//

#import "MDLoginVC.h"
#import "Define.h"
#import "HomeVC.h"
#import "AppDelegate.h"

@interface MDLoginVC ()<UITextFieldDelegate>
{
    IBOutlet UILabel *labelTitle;
    IBOutlet UILabel *labelNatura;
    IBOutlet UILabel *labelPass;
    IBOutlet UILabel *labelForgotPassword;
    IBOutlet UILabel *labelOR;
    IBOutlet UILabel *resetLbl;

    IBOutlet UITextField *textFieldPassword;
    
    IBOutlet UIButton *buttonLogin;
    IBOutlet UIButton *buttonSignup;
    IBOutlet UIButton *resetConnectionBtn;
    IBOutlet UIButton *btnLoginFB;
    IBOutlet UIImageView *imgLogo;
    
    NSMutableArray              *userArray;

    NSMutableArray              *suggestList;
    NSArray                     *permissions;
    
    //native
    NSString                    *strPassword;
}
@end

@implementation MDLoginVC
- (void)viewDidLoad
{
    [super viewDidLoad];
    [imgLogo setImage:[UIImage imageNamed:strLogo]];
}

- (void)configureUIElement{
  
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
}
-(void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear: animated];
}


#pragma mark - Store keychain


#pragma mark - Button Actions

- (void)gotoSalonView{

}

- (IBAction)login:(id)sender{
    [self.view endEditing:YES];
    
    AppDelegate* appDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    [appDelegate showSplashView];

    
}

@end
