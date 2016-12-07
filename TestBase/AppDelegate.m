//
//  AppDelegate.m
//  TestBase
//
//  Created by GiangTT on 12/5/16.
//  Copyright © 2016 GiangTT. All rights reserved.
//

#import "AppDelegate.h"
#import "MDLoginVC.h"
#import "HomeVC.h"
#import "LeftMenuViewController.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    [self.window setBackgroundColor:[UIColor whiteColor]];

    
    MDLoginVC *viewController1 = [[MDLoginVC alloc] initWithNibName:@"MDLoginVC" bundle:nil];
    
    self.navigationController = [[MainNavigationController alloc] initWithRootViewController:viewController1];
    
    [self.window setRootViewController:self.navigationController ];

    [self.window makeKeyAndVisible];

    return YES;
}

-(void)showSplashView {
    //Main...navigation
    HomeVC *viewController1 = [[HomeVC alloc] initWithNibName:@"HomeVC" bundle:nil];
    self.navigationController = [[MainNavigationController alloc] initWithRootViewController:viewController1];

    //Left
    LeftMenuViewController *leftMenu = [[LeftMenuViewController alloc] initWithNibName:@"LeftMenuViewController" bundle:nil];

    [MainNavigationController sharedInstance].leftMenu = leftMenu;
    [MainNavigationController sharedInstance].menuRevealAnimationDuration = .18;

    [MainNavigationController sharedInstance].rightMenu = nil;
    
    
    [[NSNotificationCenter defaultCenter] addObserverForName:SlideNavigationControllerDidClose object:nil queue:nil usingBlock:^(NSNotification *note) {
        NSString *menu = note.userInfo[@"menu"];
        NSLog(@"Closed %@", menu);
    }];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:SlideNavigationControllerDidOpen object:nil queue:nil usingBlock:^(NSNotification *note) {
        NSString *menu = note.userInfo[@"menu"];
        NSLog(@"Opened %@", menu);
    }];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:SlideNavigationControllerDidReveal object:nil queue:nil usingBlock:^(NSNotification *note) {
        NSString *menu = note.userInfo[@"menu"];
        NSLog(@"Revealed %@", menu);
    }];

    
    
    [self.window setRootViewController:self.navigationController ];

}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}


@end
