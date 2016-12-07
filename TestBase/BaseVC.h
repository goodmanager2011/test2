//
//  BaseVC.h
//  NaturapassMetro
//
//  Created by Giang on 7/22/15.
//  Copyright (c) 2015 PHS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Define.h"

#import "BaseNavigation.h"
#import "MainNavigationBaseView.h"
#import "SubNavBaseView.h"
#import "SlideNavigationController.h"


@interface BaseVC : UIViewController <SlideNavigationControllerDelegate>
{
        BaseNavigation *navigation;
    MainNavigationBaseView *subviewCount;

}

@property (nonatomic,strong) NSOperationQueue * operationQueue;

//Notifi
@property(nonatomic,assign) BOOL isNotifi;

//Sub nav group detail
@property(nonatomic,assign) BOOL needRemoveSubItem;

@property (nonatomic,strong) NSString *typeNotifi;
@property (nonatomic,strong) NSString *IdNotifi;
-(void)gotoNotifi_leaves;
//COMMON
@property (nonatomic,assign) BOOL isSubVC;
@property (nonatomic,assign)   BOOL isGoin;
@property (nonatomic,assign) ISSCREEN expectTarget;

@property(nonatomic,strong) UIViewController *mParent;

//Special val
@property (nonatomic,assign) BOOL isLiveHunt;
@property (nonatomic,assign) BOOL isLiveHuntDetail;

//To containt other view...

@property (nonatomic, strong)  IBOutlet SubNavBaseView *subview;

@property (nonatomic, strong)  IBOutlet UIView *vContainer;

@property (nonatomic, strong)  UIView *vBottom;

//VC
//@property (nonatomic, strong)  TabVC *myTabVC;
//@property (nonatomic, strong)  TabBottomVC *bottomVC;

@property (nonatomic, strong)  UIToolbar                   *keyboardToolbar;
@property (strong, nonatomic) IBOutlet UITableView *tableControl;

@property (nonatomic, strong) NSDictionary *dicOption;

-(void) initRefreshControl;
-(void)startRefreshControl;
-(void)stopRefreshControl;
-(void)isRemoveScrollingViewHeight:(BOOL)enable;
-(void)moreRefreshControl;
@property (nonatomic, strong)  IBOutlet NSLayoutConstraint *constraintBottom;
- (NSLayoutConstraint *)pin:(id)item attribute:(NSLayoutAttribute)attribute andView:(UIView*) v;

-(void) addSubNav:(NSString*) nameView;

-(void) onMainNavClick:(UIButton*)btn;
-(void) onSubNavClick:(UIButton*)btn;
-(void) onTabItemClick:(UIButton*)btn;

-(void) clickSubNav_Mur:(int) index;
-(void) clickSubNav_Group:(int) index;
-(void) clickSubNav_Chass:(int) index;

-(void) clickSubNav_Discuss:(int) index;
-(void) clickSubNav_Special:(int) index;

-(void) onSubNavClick_Invite_Chasse:(int) index;

-(void) InitializeKeyboardToolBar;
- (void)resignKeyboard:(id)sender;

-(void) doPushVC:(Class)class iAmParent:(BOOL)isParent;
-(void) doPushVC:(Class)class iAmParent:(BOOL)isParent expectTarget:(ISSCREEN)expectTarget;

-(void) pushVC:(BaseVC*)vc animate:(BOOL)anim;
-(void) pushVC:(BaseVC*)vc animate:(BOOL)anim expectTarget:(ISSCREEN)expectTarget;
-(void) pushVC:(BaseVC*)vc animate:(BOOL)anim expectTarget:(ISSCREEN)expectTarget iAmParent:(BOOL)isParent;
-(void) doPushVCLiveHunt:(Class)class iAmParent:(BOOL)isParent expectTarget:(ISSCREEN)expectTarget;

-(IBAction)gotoback;
-(NSString*)convertDate:(NSString*)date;
-(UIButton* )returnButton;
-(void)setThemeNavSub :(BOOL) forceParent withDicOption:(NSDictionary*)dicOption;
-(void) removeItem:(int) index;
-(void) doRefresh;

-(NSInteger) checkCachePublicationHasData;
-(void)backEditListChasse;
-(void)backEditListGroups;
-(void)backEditListMur;

-(void)fnGetAllNotifications;
-(void) fnGetAllNotifications:(NSInteger)index creen:(ISSCREEN)screen;

-(void) fnDoRefreshData;
- (void)putNotification:(NSString *)strNotificationID;
-(UIImage*) fnResizeFixWidth :(UIImage*)img :(float)wWidth;
-(void)setColorTextNavSubWithIndex:(int)index;
-(void)setThemeTabVC:(UIViewController*)vc;
-(void)backEditFavo;
-(BOOL)fnCheckResponse:(NSDictionary*)response;
-(void)checkAllow;
@end
