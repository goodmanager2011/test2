//
//  TestVC1_1.m
//  TestBase
//
//  Created by GiangTT on 12/7/16.
//  Copyright © 2016 GiangTT. All rights reserved.
//

#import "TestVC1_1.h"

@interface TestVC1_1 ()

@end

@implementation TestVC1_1

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
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
- (IBAction)goBack:(id)sender {
    [self.navigationController popViewControllerAnimated:YES];
}

@end
