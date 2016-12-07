//
//  MainNavigationController.h
//  Naturapass
//
//  Created by Clément Padovani on 10/3/14.
//  Copyright (c) 2014 Appsolute. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SlideNavigationController.h"

@interface MainNavigationController : SlideNavigationController <UINavigationControllerDelegate>

@property (nonatomic,copy) dispatch_block_t completionBlock;
@property (nonatomic,strong) UIViewController * pushedVC;

-(void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated completion:(dispatch_block_t)completion;

@end
