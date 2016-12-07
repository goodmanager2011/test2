//
//  BaseSubNav.m
//  TestBase
//
//  Created by GiangTT on 12/7/16.
//  Copyright © 2016 GiangTT. All rights reserved.
//

#import "BaseSubNav.h"

#import "HomeVC.h"
#import "TestChild1.h"

@interface BaseSubNav ()

@end

@implementation BaseSubNav

- (void)viewDidLoad {
    [super viewDidLoad];

    //Set title
    MainNavigationBaseView *subview =  (MainNavigationBaseView*) [navigation.viewNavigation1 viewWithTag:TAG_MAIN_NAV_VIEW] ;
    [subview.myTitle setText:@"abc"];
    
    //Change background color
    subview.backgroundColor = UIColorFromRGB(CHASSES_MAIN_BAR_COLOR);
    
    [self addSubNav:@"SubNavigationCHASSES"];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


-(void) onSubNavClick:(UIButton *)btn{
    [self viewWillDisappear:YES];
    
    [super onSubNavClick:btn];
    
    switch (btn.tag -START_SUB_NAV_TAG) {
        case 0://BACK
        {
            NSArray * controllerArray = [[self navigationController] viewControllers];
            
            for (UIViewController *controller in controllerArray)
            {
                //Code here.. e.g. print their titles to see the array setup;
                
                if ([controller isKindOfClass:[self.mParent class]] ) {
                    
                    [self.navigationController popToViewController:controller animated:NO];
                    return;
                }
            }
            [self gotoback];
        }
            break;
            
        case 1://MUR
        {
            if ([self isKindOfClass: [HomeVC class]])
                return;
            
            [self doPushVC:[HomeVC  class] iAmParent:NO];

        }
            break;
            
            
        case 2://TOUT
        {
            if ([self isKindOfClass: [TestChild1 class]])
                return;
            
            [self doPushVC:[TestChild1  class] iAmParent:NO];
            
        }
            break;
            
        case 3://old
        {

        }
            
            break;
        case 4://Invitation
        {
        }
        default:
            break;
    }
}



@end
