//
//  SubNavBaseView.h
//  NaturapassMetro
//
//  Created by Giang on 7/22/15.
//  Copyright (c) 2015 PHS. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^callBackSubNav) (UIButton*);

@interface SubNavBaseView : UIView
{
}
@property (nonatomic, copy) callBackSubNav myCallBack;

-(IBAction)fnSubNavClick:(id)sender;

@end
