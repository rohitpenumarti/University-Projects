function [fitresult, gof] = erfFitOptimized(Position1, Power1, Uncertainty)
%CREATEFIT(POSITION1,POWER1)
%  Create a fit.
%
%  Data for 'untitled fit 1' fit:
%      X Input : Position1
%      Y Output: Power1
%  Output:
%      fitresult : a fit object representing the fit.
%      gof : structure with goodness-of fit info.
%
%  See also FIT, CFIT, SFIT.

%  Auto-generated by MATLAB on 04-Nov-2019 07:03:53


%% Fit: 'untitled fit 1'.
[xData, yData, error] = prepareCurveData( Position1, Power1, Uncertainty );

% Set up fittype and options.
ft = fittype( 'a*(b*erf(c*(-x)/d)+e)', 'independent', 'x', 'dependent', 'y' );
opts = fitoptions( 'Method', 'NonlinearLeastSquares' );
opts.Display = 'Off';
opts.StartPoint = [0.106561626852834 0.938996068101762 0.750187650466835 0.913375856139019 0.63235924622541];

% Fit model to data.
[fitresult, gof] = fit( xData, yData, ft, opts );

% Plot fit with data.
figure( 'Name', 'Power vs. Position' );
h = plot( fitresult, xData, yData );
hold on
errorbar(xData, yData, error, '.')
hold off
legend( h, 'Power vs. Position', 'Power vs. Position', 'Location', 'NorthEast', 'Interpreter', 'none' );
title('Power vs Knife Edge Position')
text(-3.5,0,sprintf('Fit = a*(b*erf(c*(-x)/d)+e)\nSSE = %g\nRsq = %g\nAdj = %g\nRMSE = %g',gof.sse,gof.rsquare,gof.adjrsquare,gof.rmse))
myCoeffs = coeffvalues(fitresult);
intervals = confint(fitresult);
text(1, 0.8, sprintf('a = %g %g', myCoeffs(1), intervals(1)))
% Label axes
xlabel( 'Position (mm)', 'Interpreter', 'none' );
ylabel( 'Power (mW)', 'Interpreter', 'none' );
grid on

