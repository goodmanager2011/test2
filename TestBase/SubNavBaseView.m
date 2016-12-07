//
//  SubNavBaseView.m
//  NaturapassMetro
//
//  Created by Giang on 7/22/15.
//  Copyright (c) 2015 PHS. All rights reserved.
//

#import "SubNavBaseView.h"

@implementation SubNavBaseView

-(IBAction)fnSubNavClick:(id)sender
{
    //Left -> Right... 10 11 12
    UIButton *btn = (UIButton*) sender;

    //Set selected color
    
    for (UIView*view in self.subviews) {
        if ([view isKindOfClass: [UIButton class] ]) {

            UIButton*bTmp = (UIButton*)view;
            if (bTmp == btn) {
                [bTmp setSelected:YES];
                continue;
            }else{
            //Change color
                [bTmp setSelected:NO];
            }
            
        }
    }
    
    
    //set selected
    if (self.myCallBack) {
        self.myCallBack(btn);

    }
    
}

@end
