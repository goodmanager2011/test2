//
//  MainNavigationBaseView.m
//  Naturapass
//
//  Created by Giang on 7/27/15.
//  Copyright (c) 2015 Appsolute. All rights reserved.
//

#import "MainNavigationBaseView.h"

@implementation MainNavigationBaseView

-(IBAction)fnMainNavClick:(id)sender
{
    //Left -> Right... 10 11 12
    UIButton *btn = (UIButton*) sender;
    //set selected
    self.myMainNavCallback(btn);
    
}

@end
