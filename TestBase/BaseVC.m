//
//  BaseVC.m
//  NaturapassMetro
//
//  Created by Giang on 7/22/15.
//  Copyright (c) 2015 PHS. All rights reserved.
//

#import "BaseVC.h"

#import "MainNavigationBaseView.h"
#import "MainNavigationController.h"
#import "SubNavBaseView.h"

@interface BaseVC ()
{

}

@end

@implementation BaseVC

- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
    
}

#pragma mark - SlideNavigationController Methods -

- (BOOL)slideNavigationControllerShouldDisplayLeftMenu
{
    return YES;
}

- (BOOL)slideNavigationControllerShouldDisplayRightMenu
{
    return YES;
}



- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self.navigationController setNavigationBarHidden:NO animated:NO];
    
    [self loadNavigation];
    
    //clean
    [self.view removeConstraints:self.view.constraints];
    self.navigationController.navigationBar.hidden = YES;
    self.constraintBottom.constant = 0;

    //using custom navigation
    self.navigationItem.hidesBackButton=YES;
    
    if ([self respondsToSelector:@selector(edgesForExtendedLayout)])
        self.edgesForExtendedLayout = UIRectEdgeNone;   // iOS 7 specific
    
    self.vContainer.backgroundColor = UIColorFromRGB(MAIN_COLOR);
    
}

-(void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    [self.view layoutIfNeeded];

}


-(void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}

//Stupid
-(void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
}

-(void) addSubNav:(NSString*) nameView
{
    if (nameView == nil)
    {
        
        //UIview Top
        UIView *vTop =[UIView new];
        vTop.frame = CGRectMake( 0, 0 , self.view.frame.size.width , 44);
        vTop.backgroundColor = [UIColor redColor];
        [self.view addSubview:vTop];
        vTop.translatesAutoresizingMaskIntoConstraints = NO;
        // main navigation
        id md_view=nil;
        NSArray *nibArrayTop = [[NSBundle mainBundle]loadNibNamed:@"MainNavMUR" owner:self options:nil];
        md_view =[nibArrayTop objectAtIndex:0];
        
        MainNavigationBaseView *subviewTop = (MainNavigationBaseView*)md_view;
        
        //update constraint for last item uploading.
        
        [subviewTop setMyMainNavCallback:^(UIButton*btn)
         {
             if (self.isLiveHuntDetail) {
                 [self gotoback];
             }
             else
             {
                 [self onMainNavClick:btn];
             }
             
         }];
        subviewTop.translatesAutoresizingMaskIntoConstraints = NO;
        [vTop addSubview:subviewTop];
        [self.view addConstraints:[NSLayoutConstraint
                                   constraintsWithVisualFormat:@"V:|-0-[subviewTop]-0-|"
                                   options:NSLayoutFormatDirectionLeadingToTrailing
                                   metrics:nil
                                   views:NSDictionaryOfVariableBindings(subviewTop)]];
        
        
        
        [self.view addConstraints:[NSLayoutConstraint
                                   constraintsWithVisualFormat:@"H:|-0-[subviewTop]-0-|"
                                   options:NSLayoutFormatDirectionLeadingToTrailing
                                   metrics:nil
                                   views:NSDictionaryOfVariableBindings(subviewTop)]];
        
        UIView *vv = self.vContainer;
        
        [self.view addConstraints:[NSLayoutConstraint
                                   constraintsWithVisualFormat:@"V:|-0-[vTop(80)]-0-[vv]-0-|"
                                   options:NSLayoutFormatDirectionLeadingToTrailing
                                   metrics:nil
                                   views:NSDictionaryOfVariableBindings(vTop,vv)]];
        [self.view addConstraints:[NSLayoutConstraint
                                   constraintsWithVisualFormat:@"H:|-0-[vTop]-0-|"
                                   options:NSLayoutFormatDirectionLeadingToTrailing
                                   metrics:nil
                                   views:NSDictionaryOfVariableBindings(vTop)]];
        
        [self.view addConstraint: [NSLayoutConstraint
                                   constraintWithItem:self.vContainer attribute:NSLayoutAttributeBottom
                                   relatedBy:NSLayoutRelationEqual
                                   toItem:self.view
                                   attribute:NSLayoutAttributeBottom
                                   multiplier:1.0 constant:0] ];
        
        [self.view addConstraint: [NSLayoutConstraint
                                   constraintWithItem:self.vContainer attribute:NSLayoutAttributeLeading
                                   relatedBy:NSLayoutRelationEqual
                                   toItem:self.view
                                   attribute:NSLayoutAttributeLeading
                                   multiplier:1.0 constant:0] ];
        
        
        [self.view addConstraint: [NSLayoutConstraint
                                   constraintWithItem:self.vContainer attribute:NSLayoutAttributeTrailing
                                   relatedBy:NSLayoutRelationEqual
                                   toItem:self.view
                                   attribute:NSLayoutAttributeTrailing
                                   multiplier:1.0 constant:0] ];
        subviewCount =subviewTop;
        [subviewCount layoutIfNeeded];
        
        
    }
      else{
        //UIview Top
        UIView *vTop =[UIView new];
        vTop.frame = CGRectMake( 0, 0 , self.view.frame.size.width , 44);
        vTop.backgroundColor = [UIColor redColor];
        [self.view addSubview:vTop];
        vTop.translatesAutoresizingMaskIntoConstraints = NO;
        // main navigation
        id md_view=nil;
        NSArray *nibArrayTop = [[NSBundle mainBundle]loadNibNamed:@"MainNavMUR" owner:self options:nil];
        md_view =[nibArrayTop objectAtIndex:0];
        
        MainNavigationBaseView *subviewTop = (MainNavigationBaseView*)md_view;
        
        //update constraint for last item uploading.
        
        [subviewTop setMyMainNavCallback:^(UIButton*btn)
         {
             if (self.isLiveHuntDetail) {
                 [self gotoback];
             }
             else
             {
                 [self onMainNavClick:btn];
             }
             
         }];
        
        subviewTop.translatesAutoresizingMaskIntoConstraints = NO;
        [vTop addSubview:subviewTop];
        [self.view addConstraints:[NSLayoutConstraint
                                   constraintsWithVisualFormat:@"V:|-0-[subviewTop]-0-|"
                                   options:NSLayoutFormatDirectionLeadingToTrailing
                                   metrics:nil
                                   views:NSDictionaryOfVariableBindings(subviewTop)]];
        
        
        
        [self.view addConstraints:[NSLayoutConstraint
                                   constraintsWithVisualFormat:@"H:|-0-[subviewTop]-0-|"
                                   options:NSLayoutFormatDirectionLeadingToTrailing
                                   metrics:nil
                                   views:NSDictionaryOfVariableBindings(subviewTop)]];
        
        //add subview
        NSArray *nibArray = [[NSBundle mainBundle]loadNibNamed:nameView owner:self options:nil];
        
        
        self.subview = (SubNavBaseView*)[nibArray objectAtIndex:0];
        CGRect rect = self.subview.frame;
        rect.size.height = 44;
        
        self.subview.frame = rect;
        
        UIView *sview = self.subview;
        
        __weak BaseVC * v = self;
        [self.subview setMyCallBack:^(UIButton*btn)
         {
             
             [v onSubNavClick:btn];
             
         }];
        
        self.subview.translatesAutoresizingMaskIntoConstraints = NO;  //This part hung me up
        
        
        [self.view addSubview:self.subview];
        [self.subview setBackgroundColor:UIColorFromRGB(SUBNAVE_COLOR)];
        
        
        UIView *vv = self.vContainer;
        
        [self.view addConstraints:[NSLayoutConstraint
                                   constraintsWithVisualFormat:@"V:|-0-[vTop(80)]-0-[sview(44)]-0-[vv]-0-|"
                                   options:NSLayoutFormatDirectionLeadingToTrailing
                                   metrics:nil
                                   views:NSDictionaryOfVariableBindings(vTop,sview,vv)]];
        
        [self.view addConstraint: [NSLayoutConstraint
                                   constraintWithItem:self.vContainer attribute:NSLayoutAttributeBottom
                                   relatedBy:NSLayoutRelationEqual
                                   toItem:self.view
                                   attribute:NSLayoutAttributeBottom
                                   multiplier:1.0 constant:0] ];
        
        
        [self.view addConstraints:[NSLayoutConstraint
                                   constraintsWithVisualFormat:@"H:|-0-[sview]-0-|"
                                   options:NSLayoutFormatDirectionLeadingToTrailing
                                   metrics:nil
                                   views:NSDictionaryOfVariableBindings(sview)]];
        
        [self.view addConstraint: [NSLayoutConstraint
                                   constraintWithItem:self.subview attribute:NSLayoutAttributeBottom
                                   relatedBy:NSLayoutRelationEqual
                                   toItem:self.vContainer
                                   attribute:NSLayoutAttributeTop
                                   multiplier:1.0 constant:0] ];
        
        [self.view addConstraint: [NSLayoutConstraint
                                   constraintWithItem:self.vContainer attribute:NSLayoutAttributeLeading
                                   relatedBy:NSLayoutRelationEqual
                                   toItem:self.view
                                   attribute:NSLayoutAttributeLeading
                                   multiplier:1.0 constant:0] ];
        
        
        [self.view addConstraint: [NSLayoutConstraint
                                   constraintWithItem:self.vContainer attribute:NSLayoutAttributeTrailing
                                   relatedBy:NSLayoutRelationEqual
                                   toItem:self.view
                                   attribute:NSLayoutAttributeTrailing
                                   multiplier:1.0 constant:0] ];
        [self.view addConstraints:[NSLayoutConstraint
                                   constraintsWithVisualFormat:@"H:|-0-[vTop]-0-|"
                                   options:NSLayoutFormatDirectionLeadingToTrailing
                                   metrics:nil
                                   views:NSDictionaryOfVariableBindings(vTop)]];
        
        
        subviewCount =subviewTop;
        [subviewCount layoutIfNeeded];
    }
    
}


- (NSLayoutConstraint *)pin:(id)item attribute:(NSLayoutAttribute)attribute andView:(UIView*) v
{
    return [NSLayoutConstraint constraintWithItem:v
                                        attribute:attribute
                                        relatedBy:NSLayoutRelationEqual
                                           toItem:item
                                        attribute:attribute
                                       multiplier:1.0
                                         constant:0.0];
}

#pragma mark - NAV

-(void) doRemoveObservation
{
    //remove all observation...
    NSArray * controllerArray = [[self navigationController] viewControllers];
    
    for (int i=0; i < controllerArray.count; i++) {
        if ([controllerArray[i] isKindOfClass: [BaseVC class]]) {
            BaseVC *vc = (BaseVC*) controllerArray[i];
            [vc fnRemoveObserver];
        }
    }
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

-(void)viewWillDisappear:(BOOL)animated{
    [super viewWillDisappear:animated];
}

#pragma mark - Custom Navigation
- (void)loadNavigation{
    navigation =[[BaseNavigation alloc] initWithNibName:@"BaseNavigation" bundle:nil];
    
    self.navigationItem.titleView = navigation.view;
    
    self.navigationController.navigationBar.translucent = NO;

    [navigation.view sizeToFit];
}


- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}


-(IBAction)gotoback
{
    [self.navigationController popViewControllerAnimated:YES];
}

-(void) doPushVC:(Class)class iAmParent:(BOOL)isParent expectTarget:(ISSCREEN)expectTarget
{
    NSArray * controllerArray = [[self navigationController] viewControllers];
    
    for (UIViewController *controller in controllerArray)
    {
        if ([controller isKindOfClass:class] ) {
            
            [self.navigationController popToViewController:controller animated:NO];
            return;
        }
    }
    
    BaseVC *viewController1 = [[class alloc] initWithNibName:NSStringFromClass(class) bundle:nil];
    viewController1.expectTarget = expectTarget;
    if (isParent) {
        viewController1.mParent = self;
    }else{
        viewController1.mParent = self.mParent;
    }
    
    [(MainNavigationController *)self.navigationController pushViewController:viewController1 animated:NO completion:^ {
        NSLog(@"COMPLETED");
    }];
}

-(void) doPushVC:(Class)class iAmParent:(BOOL)isParent
{
    NSArray * controllerArray = [[self navigationController] viewControllers];
    
    for (UIViewController *controller in controllerArray)
    {
        if ([controller isKindOfClass:class] ) {
            
            [self.navigationController popToViewController:controller animated:NO];
            return;
        }
    }
    
    BaseVC *viewController1 = [[class alloc] initWithNibName:NSStringFromClass(class) bundle:nil];
    viewController1.expectTarget = self.expectTarget;
    if (isParent) {
        viewController1.mParent = self;
    }else{
        viewController1.mParent = self.mParent;
    }
    
    //
    viewController1.needRemoveSubItem = self.needRemoveSubItem;
    
    [(MainNavigationController *)self.navigationController pushViewController:viewController1 animated:NO completion:^ {
        NSLog(@"COMPLETED");
    }];
    
}
-(void) pushVC:(BaseVC*)vc animate:(BOOL)anim
{
    vc.expectTarget = self.expectTarget;
    
    vc.mParent = self;
    [(MainNavigationController *)self.navigationController pushViewController:vc animated:anim completion:^ {
        NSLog(@"COMPLETED");
    }];
    
}

-(void) pushVC:(BaseVC*)vc animate:(BOOL)anim expectTarget:(ISSCREEN)expectTarget
{
    vc.expectTarget = expectTarget;
    
    vc.mParent = self;
    [(MainNavigationController *)self.navigationController pushViewController:vc animated:anim completion:^ {
        NSLog(@"COMPLETED");
    }];
    
}
-(void) pushVC:(BaseVC*)vc animate:(BOOL)anim expectTarget:(ISSCREEN)expectTarget iAmParent:(BOOL)isParent
{
    vc.expectTarget = expectTarget;
    
    if (isParent) {
        vc.mParent = self;
    }else{
        vc.mParent = self.mParent;
    }
    
    [(MainNavigationController *)self.navigationController pushViewController:vc animated:anim completion:^ {
        NSLog(@"COMPLETED");
    }];
    
}

-(void)setThemeNavSub :(BOOL) forceParent withDicOption:(NSDictionary*)dicOption
{
    if (self.isLiveHunt) {
        [self setThemeTabVC:self];
        return;
    }
    
    UIButton  *btnTmp1 = (UIButton*)[self.subview viewWithTag:2* (START_SUB_NAV_TAG + 1)];
    UIButton  *btnTmp2 = (UIButton*)[self.subview viewWithTag:2* (START_SUB_NAV_TAG + 2)];
    UIButton  *btnTmp3 = (UIButton*)[self.subview viewWithTag:2* (START_SUB_NAV_TAG + 3)];
    UIButton  *btnTmp4 = (UIButton*)[self.subview viewWithTag:2* (START_SUB_NAV_TAG + 4)];
    UIButton  *btnTmp5 = (UIButton*)[self.subview viewWithTag:2* (START_SUB_NAV_TAG + 5)];
    
    UILabel  *txtTag1 = (UILabel*)[self.subview viewWithTag:2* (TEXT_START_SUB_NAV_TAG + 1)];
    UILabel  *txtTag2 = (UILabel*)[self.subview viewWithTag:2* (TEXT_START_SUB_NAV_TAG + 2)];
    UILabel  *txtTag3 = (UILabel*)[self.subview viewWithTag:2* (TEXT_START_SUB_NAV_TAG + 3)];
    UILabel  *txtTag4 = (UILabel*)[self.subview viewWithTag:2* (TEXT_START_SUB_NAV_TAG + 4)];
    UILabel  *txtTag5 = (UILabel*)[self.subview viewWithTag:2* (TEXT_START_SUB_NAV_TAG + 5)];
    
    
    btnTmp1.imageView.contentMode = UIViewContentModeScaleAspectFit;
    btnTmp2.imageView.contentMode = UIViewContentModeScaleAspectFit;
    btnTmp3.imageView.contentMode = UIViewContentModeScaleAspectFit;
    btnTmp4.imageView.contentMode = UIViewContentModeScaleAspectFit;
    btnTmp5.imageView.contentMode = UIViewContentModeScaleAspectFit;

    
    NSArray *arr =[self fnSUBNAVTAG];
    BOOL isChild= NO;
    if (arr) {
        isChild = [arr[0]  boolValue];
    }
    
    
    switch (self.expectTarget) {

        default:
        {
        }
            break;
    }
    
    btnTmp1.selected=NO;
    btnTmp2.selected=NO;
    btnTmp3.selected=NO;
    btnTmp4.selected=NO;
    btnTmp5.selected=NO;
    //color text
    txtTag1.textColor = UIColorFromRGB(TEXT_SUBNAVI_COLOR);
    txtTag2.textColor = UIColorFromRGB(TEXT_SUBNAVI_COLOR);
    txtTag3.textColor = UIColorFromRGB(TEXT_SUBNAVI_COLOR);
    txtTag4.textColor = UIColorFromRGB(TEXT_SUBNAVI_COLOR);
    txtTag5.textColor = UIColorFromRGB(TEXT_SUBNAVI_COLOR);
    
}

-(void)setColorTextNavSubWithIndex:(int)index
{
    UILabel  *txtTag1 = (UILabel*)[self.subview viewWithTag:index];
    switch (self.expectTarget) {
        case ISLOUNGE:
        {
            txtTag1.textColor = UIColorFromRGB(CHASSES_MAIN_BAR_COLOR);
            
        }
            break;
        case ISGROUP:
        {
            txtTag1.textColor = UIColorFromRGB(GROUP_MAIN_BAR_COLOR);
            
            
        }
            break;
        case ISAMIS:
        {
            txtTag1.textColor = UIColorFromRGB(AMIS_MAIN_BAR_COLOR);
            
        }
            break;
        case ISMUR:
        {
            txtTag1.textColor = UIColorFromRGB(MUR_MAIN_BAR_COLOR);
            
            
        }
            break;
        case ISPARAMTRES:
        {
            txtTag1.textColor = UIColorFromRGB(PARAM_MAIN_BAR_COLOR);
            
        }
            break;
        case ISDISCUSS:
        {
            txtTag1.textColor = UIColorFromRGB(DISCUSSION_MAIN_BAR_COLOR);
            
            
        }
            break;
        default:
        {
            txtTag1.textColor = UIColorFromRGB(MUR_MAIN_BAR_COLOR);
        }
            break;
    }
}

-(UIButton* )returnButton
{
    UIButton *btnTmp = nil;
    NSArray *arr =[self fnSUBNAVTAG];
    if (arr) {
        int  index = [arr[1] intValue];
        btnTmp = (UIButton*)[self.subview viewWithTag:2* (START_SUB_NAV_TAG + index)];
        
    }
    return btnTmp;
}

-(NSArray*)fnSUBNAVTAG
{
    NSArray *arr =nil;
    //GROUP ENTER
    
    //Focus | index order.
    
    /*
    if ([self isKindOfClass: [GroupEnterMurVC class]])
    {
        arr =[NSArray arrayWithObjects:@"1",@"1",nil];
        
    }
    else if ([self isKindOfClass: [FriendInfoVC class]] && self.expectTarget != ISMUR)
    {
        arr =[NSArray arrayWithObjects:@"1",@"1",nil];
        
    }
    else if ([self isKindOfClass: [MapLocationVC class]])
    {
        arr =[NSArray arrayWithObjects:@"1",@"2",nil];
        
    }
    else if ([self isKindOfClass: [MapGlobalVC class]])
    {
        arr =[NSArray arrayWithObjects:@"1",@"2",nil];
        
    }
    */
    
    return arr;
}

#pragma mark - rotate

- (BOOL)shouldAutorotate
{
    return YES;
}

-(void) fnRemoveObserver
{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

-(void) onMainNavClick:(UIButton*)btn
{
    //Kill map
    
    switch (btn.tag -START_SUB_NAV_TAG) {
        case 0://HOME
        {
            [[SlideNavigationController sharedInstance] toggleLeftMenu];
            
            //[self doRemoveObservation];
            
            //[self.navigationController popToRootViewControllerAnimated:YES];
        }
            break;
            
        default:
            break;
    }
    
}

-(void) onSubNavClick:(UIButton*)btn
{
    [self viewWillDisappear:YES];
    
    [btn setSelected:NO];
    UIButton * subBtnTmp = (UIButton*)[self.subview viewWithTag:2* (btn.tag)];
    [subBtnTmp setSelected:YES];
}

@end
