//
//  AppDelegate.h
//  TestBase
//
//  Created by GiangTT on 12/5/16.
//  Copyright © 2016 GiangTT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainNavigationController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) MainNavigationController *navigationController;

-(void)showSplashView;
@end

