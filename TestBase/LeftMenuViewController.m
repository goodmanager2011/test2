//
//  MenuViewController.m
//  SlideMenu
//
//  Created by Aryan Gh on 4/24/13.
//  Copyright (c) 2013 Aryan Ghassemi. All rights reserved.
//

#import "LeftMenuViewController.h"
#import "SlideNavigationContorllerAnimatorFade.h"
#import "SlideNavigationContorllerAnimatorSlide.h"
#import "SlideNavigationContorllerAnimatorScale.h"
#import "SlideNavigationContorllerAnimatorScaleAndFade.h"
#import "SlideNavigationContorllerAnimatorSlideAndFade.h"

#import "HomeVC.h"
#import "MDLoginVC.h"
#import "TestVC1.h"

@implementation LeftMenuViewController

#pragma mark - UIViewController Methods -

- (id)initWithCoder:(NSCoder *)aDecoder
{
	self.slideOutAnimationEnabled = YES;
	
	return [super initWithCoder:aDecoder];
}

- (void)viewDidLoad
{
	[super viewDidLoad];
	
	self.tableView.separatorColor = [UIColor lightGrayColor];
	
	UIImageView *imageView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"leftMenu.jpg"]];
	self.tableView.backgroundView = imageView;
}

#pragma mark - UITableView Delegate & Datasrouce -

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
	return 4;
}

- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section
{
	UIView *view = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.tableView.frame.size.width, 20)];
	view.backgroundColor = [UIColor clearColor];
	return view;
}

- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section
{
	return 20;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cell"];
    
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault
                                      reuseIdentifier:@"cell"];
    }
    
    cell.textLabel.font = [UIFont fontWithName:@"GillSans" size:16.0];

    switch (indexPath.row)
	{
		case 0:
			cell.textLabel.text = @"Home";
			break;
			
		case 1:
			cell.textLabel.text = @"Profile";
			break;
			
		case 2:
			cell.textLabel.text = @"Friends";
			break;
			
		case 3:
			cell.textLabel.text = @"Sign Out";
			break;
	}
	
	cell.backgroundColor = [UIColor clearColor];
	
	return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{

    UIViewController *viewController1;
	switch (indexPath.row)
	{
		case 0:
            viewController1 = [[HomeVC alloc] initWithNibName:@"HomeVC" bundle:nil];
			break;
            
		case 1:
            viewController1 = [[MDLoginVC alloc] initWithNibName:@"MDLoginVC" bundle:nil];
			break;
			
		case 2:
            viewController1 = [[TestVC1 alloc] initWithNibName:@"TestVC1" bundle:nil];
			break;
			
		case 3:
			[self.tableView deselectRowAtIndexPath:[self.tableView indexPathForSelectedRow] animated:YES];
            
			[[SlideNavigationController sharedInstance] popToRootViewControllerAnimated:YES];
			return;
			
            break;
	}
	
	[[SlideNavigationController sharedInstance] popToRootAndSwitchToViewController:viewController1
															 withSlideOutAnimation:self.slideOutAnimationEnabled
																	 andCompletion:nil];
}

@end
