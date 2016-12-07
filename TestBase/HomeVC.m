//
//  HomeVC.m
//  TestBase
//
//  Created by GiangTT on 12/5/16.
//  Copyright © 2016 GiangTT. All rights reserved.
//

#import "HomeVC.h"

@interface HomeVC ()

@end

@implementation HomeVC

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




@end
