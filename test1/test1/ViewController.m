//
//  ViewController.m
//  test1
//
//  Created by GS-Soft on 3/30/15.
//  Copyright (c) 2015 ggss. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
{
    NSMutableArray *stack;
    int index;
    int iMap;
    int iMAX;
}
@end

@implementation ViewController



- (IBAction)goNext:(id)sender {
    //
    //change something
    if (index == iMAX-1) {
        return;
    }
    //stop index
    
    index += 1;
    
    //get cached data
    iMap += 1;
    
    NSNumber *n = stack[iMap];
    NSLog(@"PLAY: %d", [n intValue]);

    [self checkRuleNext];
}

- (IBAction)goBack:(id)sender {
    //
    if (index == 0) {
        return;
    }
    //stop index

    
    index -= 1;
    
    //get cached data
    iMap -= 1;
    
    NSNumber *n = stack[iMap];
    NSLog(@"PLAY: %d", [n intValue]);
    
    [self checkRuleBack];
}

-(void) checkRuleBack
{
    //2 x 2
    //left
    //delete last
    if (index < iMAX-1-2) {
        [stack removeLastObject];
    }
    
    //add left
    if (index-2 >= 0) {//boundary
        
        if(iMap+1 <= 2 )//Left full 2
        {
            [stack insertObject:[NSNumber numberWithInt:index-2] atIndex:0];
            iMap += 1;
        }
    }
}

-(void) checkRuleNext
{
    //left
    //delete first
    if (index > 2) {
        [stack removeObjectAtIndex:0];
        iMap -= 1;
    }
    
    //add right
    if (index+2 <= iMAX-1) {//boundary
        
        if(stack.count - (iMap+1) < 2 )//Right full 2
        {
            [stack addObject: [NSNumber numberWithInt:index+2] ];
        }
    }
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    iMAX = 7;
    
    stack = [NSMutableArray array];
    
    [stack addObject: [NSNumber numberWithInt:0] ];
    [stack addObject: [NSNumber numberWithInt:1] ];
    [stack addObject: [NSNumber numberWithInt:2] ];
    
    index = 0;
    iMap = 0;
    
    NSNumber *n = stack[iMap];
    NSLog(@"PLAY: %d", [n intValue]);

    for (NSNumber*n in stack) {
        NSLog(@"VALUE IN STACK: %d", [n intValue]);
        
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
