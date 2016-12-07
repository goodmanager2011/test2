//
//  TestVC1.m
//  TestBase
//
//  Created by GiangTT on 12/7/16.
//  Copyright © 2016 GiangTT. All rights reserved.
//

#import "TestVC1.h"
#import "TestVC1_1.h"

@interface TestVC1 ()

@end

@implementation TestVC1

- (void)viewDidLoad {
    [super viewDidLoad];

    //Set title
    MainNavigationBaseView *subview =  (MainNavigationBaseView*) [navigation.viewNavigation1 viewWithTag:TAG_MAIN_NAV_VIEW] ;
    [subview.myTitle setText:@"edf"];
    
    //Change background color
    subview.backgroundColor = UIColorFromRGB(CHASSES_MAIN_BAR_COLOR);
    
    [self addSubNav:@"SubNavigationCHASSES"];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/
- (IBAction)go1_1:(id)sender {
    
   TestVC1_1* viewController1 = [[TestVC1_1 alloc] initWithNibName:@"TestVC1_1" bundle:nil];
    [self.navigationController pushViewController:viewController1 animated:YES];
    

}

@end
