//
//  MainNavigationBaseView.h
//  Naturapass
//
//  Created by Giang on 7/27/15.
//  Copyright (c) 2015 Appsolute. All rights reserved.
//
#import <UIKit/UIKit.h>

typedef void (^callBackMainNav) (UIButton*);

@interface MainNavigationBaseView : UIView

@property (nonatomic, strong) IBOutlet UILabel *myTitle;
@property (nonatomic, copy) callBackMainNav myMainNavCallback;

@property (strong, nonatomic) IBOutlet NSLayoutConstraint *uploadConstraintWidth;
@property (strong, nonatomic) IBOutlet UIImageView *imgUpload;


-(IBAction)fnMainNavClick:(id)sender;

@end
